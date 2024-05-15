#include <lvgl.h>
#include <LovyanGFX.hpp>
#include "ui.h"
//#include <BLEDevice.h>
#define Ntcpin 36//A0              //vp 36
#define analog_Volt_pin 35//A1     // D35
#define WCS1800_PIN 34//A2         //D34
//#define BUTTON_PIN 0
float V_out;
float R5 = 10000.0;
float logR6, R6, T;
float c1 = 0.001129148, c2 = 0.000234125, c3 = 0.0000000876741;
float voltage;
float Vout,VoutStr;
float value, power ;
float firsekrrha,firsekrrhaStr;
float pStr,SoStr,AStr,WStr,zStr,eStr,TStr;
float WHH = 0.0;
float AH = 0.0;
float EM = 0.0;
float SM = 0.0;
// BLEServer *pServer;
// BLEService *pService;
// BLECharacteristic *pCharacteristic;

// // Callbacks for BLE characteristics
// class MyCallbacks : public BLECharacteristicCallbacks {
//   void onWrite(BLECharacteristic *pCharacteristic) {
//     std::string value = pCharacteristic->getValue();

//     if (value.length() > 0) {
//       Serial.println("*********");
//       Serial.print("New value: ");
//       for (int i = 0; i < value.length(); i++)
//         Serial.print(value[i]);

//       Serial.println();
//       Serial.println("*********");
//     }
//   }
// };
void init_input_saamaan()
{  
    pinMode(Ntcpin, INPUT);
    pinMode(analog_Volt_pin, INPUT);
    pinMode(WCS1800_PIN, INPUT);
  //   pinMode(BUTTON_PIN, INPUT_PULLUP);
  //     // Initialize BLE
  // BLEDevice::init("BTA!G");
  // pServer = BLEDevice::createServer();
  // pService = pServer->createService("4fafc201-1fb5-459e-8fcc-c5c9c331914b");
  // pCharacteristic = pService->createCharacteristic("beb5483e-36e1-4688-b7f5-ea07361b26a8", BLECharacteristic::PROPERTY_READ | BLECharacteristic::PROPERTY_WRITE);

  // // Set callback for characteristic
  // pCharacteristic->setCallbacks(new MyCallbacks());

  // // Start the BLE service and advertising
  // pService->start();
  // BLEAdvertising *pAdvertising = pServer->getAdvertising();
  // pAdvertising->start();

}

float map_float(float x, float in_min, float in_max, float out_min, float out_max) {
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}


class LGFX : public lgfx::LGFX_Device
{
lgfx::Panel_ILI9341    _panel_instance; //9341
lgfx::Bus_SPI       _bus_instance;  
lgfx::Light_PWM     _light_instance;
//lgfx::Touch_XPT2046     _touch_instance;

public:
  LGFX(void)
  {
    { 
      auto cfg = _bus_instance.config();  
      cfg.spi_host = SPI3_HOST;  // VSPI_HOST; 
      cfg.spi_mode = 0;             
      cfg.freq_write = 40000000;    
      cfg.freq_read  = 16000000;    
      cfg.spi_3wire  = false;       
      cfg.use_lock   = true;        
      cfg.dma_channel = 1;        
      cfg.pin_sclk = 18;// D8;    //18  14      
      cfg.pin_mosi =  23;//D10;      //23    13
      cfg.pin_miso =  19;//D9;          //19  12
      cfg.pin_dc   =  2; //D5;         //2    
      _bus_instance.config(cfg);    
      _panel_instance.setBus(&_bus_instance);    
    }

    { 
      auto cfg = _panel_instance.config();   
      cfg.pin_cs           =   15; //D7;   //15
      cfg.pin_rst          =    4; //D6;    //4
      cfg.pin_busy         =    -1;  
      // cfg.memory_width     =   240; 
      // cfg.memory_height    =   320; 
      cfg.panel_width      =   240; 
      cfg.panel_height     =   320; 
      cfg.offset_x         =     0;  
      cfg.offset_y         =     0; 
      cfg.offset_rotation  =     0; 
      cfg.dummy_read_pixel =     8; 
      cfg.dummy_read_bits  =     1;  
      cfg.readable         =  true;  
      cfg.invert           = false;  
      cfg.rgb_order        = false;  
      cfg.dlen_16bit       = false; 
      cfg.bus_shared       =  true;  

      _panel_instance.config(cfg);
    }
    
    { 
      auto cfg = _light_instance.config();   

      //cfg.pin_bl = 21;          
      cfg.invert = false;         
      cfg.freq   = 44100;         
      cfg.pwm_channel = 7;         

      _light_instance.config(cfg);
      _panel_instance.setLight(&_light_instance); 
    }

    // { 
    //   auto cfg = _touch_instance.config();
    //   cfg.x_min      = 0;   
    //   cfg.x_max      = 239;  
    //   cfg.y_min      = 0;   
    //   cfg.y_max      = 319; 
    //   cfg.pin_int    = -1; 
    //   cfg.bus_shared = true;
    //   cfg.offset_rotation = 0;
    //   cfg.spi_host = VSPI_HOST;
    //   cfg.freq = 1000000;    
    //   cfg.pin_sclk = 18;   
    //   cfg.pin_mosi = 23;     
    //   cfg.pin_miso = 19;    
    //   cfg.pin_cs   = 5;     //0
    //   _touch_instance.config(cfg);
    //   _panel_instance.setTouch(&_touch_instance);  
    // }
    setPanel(&_panel_instance); 
  }
};

static LGFX tft;
/*Change to your screen resolution*/
static const uint16_t screenWidth  = 320; 
static const uint16_t screenHeight = 240;
static lv_disp_draw_buf_t draw_buf;
static lv_color_t buf[ screenWidth * screenHeight / 10 ];
//TFT_eSPI tft = TFT_eSPI(screenWidth, screenHeight); /* TFT instance */

/* Display flushing */
void my_disp_flush( lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p )
{
    uint32_t w = ( area->x2 - area->x1 + 1 );
    uint32_t h = ( area->y2 - area->y1 + 1 );

    tft.startWrite();
    tft.setAddrWindow( area->x1, area->y1, w, h );
    //tft.pushColors( ( uint16_t * )&color_p->full, w * h, true );
    tft.writePixels((lgfx::rgb565_t *)&color_p->full, w * h);
    tft.endWrite();

    lv_disp_flush_ready( disp );
}

/*Read the touchpad*/
// void my_touchpad_read( lv_indev_drv_t * indev_driver, lv_indev_data_t * data )
// {
//     uint16_t touchX = 0, touchY = 0;

//     bool touched = false;//tft.getTouch( &touchX, &touchY, 600 );

//     if( !touched )
//     {
//         data->state = LV_INDEV_STATE_REL;
//     }
//     else
//     {
//         data->state = LV_INDEV_STATE_PR;

//         /*Set the coordinates*/
//         data->point.x = touchX;
//         data->point.y = touchY;

//         Serial.print( "Data x " );
//         Serial.println( touchX );

//         Serial.print( "Data y " );
//         Serial.println( touchY );
//     }
// }

void setup()
{
    Serial.begin( 115200 ); /* prepare for possible serial debug */
    tft.begin();          /* TFT init */
    tft.setRotation( 3 ); /* Landscape orientation, flipped */
    init_input_saamaan();
    lv_init();

    lv_disp_draw_buf_init( &draw_buf, buf, NULL, screenWidth *10 );

    /*Initialize the display*/
    static lv_disp_drv_t disp_drv;
    lv_disp_drv_init( &disp_drv );
    /*Change the following line to your display resolution*/
    disp_drv.hor_res = screenWidth;
    disp_drv.ver_res = screenHeight;
    disp_drv.flush_cb = my_disp_flush;
    disp_drv.draw_buf = &draw_buf;
    lv_disp_drv_register( &disp_drv );

    /*Initialize the (dummy) input device driver*/
    // static lv_indev_drv_t indev_drv;
    // lv_indev_drv_init( &indev_drv );
    // indev_drv.type = LV_INDEV_TYPE_POINTER;
    // indev_drv.read_cb = my_touchpad_read;
    // lv_indev_drv_register( &indev_drv );


    ui_init();
    Serial.println( "Setup done Bro!" );
}
// void lv_scr_load_ui_Screen1() {
//     lv_scr_load(ui_Screen1);
// }

// void lv_scr_load_ui_Screen2() {
//     lv_scr_load(ui_Screen2);
// }
// void lv_scr_load_ui_Screen3() {
//     lv_scr_load(ui_Screen3);
// }
// void lv_scr_load_ui_Screen4() {
//     lv_scr_load(ui_Screen4);
// }

// Function to calculate SOC based on voltage
double calculateSOC(double voltage) {
    // Define the voltage range and corresponding SOC values
    const double minVoltage = 10.0; // Minimum voltage
    const double maxVoltage = 12.90; // Maximum voltage
    const int minSOC = 0; // Corresponding SOC at minimum voltage (0%)
    const int maxSOC = 100; // Corresponding SOC at maximum voltage (100%)

    // Calculate SOC using linear interpolation
    double soc = minSOC + (voltage - minVoltage) * (maxSOC - minSOC) / (maxVoltage - minVoltage);

    // Ensure SOC is within the valid range (0-100)
    soc = std::max(0.0, std::min(100.0, soc));

    return soc;
}
void loop()
{ 
  // keyfunction();

  temp_bhi_dimak_kharab_krta_hai();
  
  int value = analogRead(analog_Volt_pin);
  Vout = map_float(value, 0, 4095, 0, 12.93); // Map the ADC reading to voltage range

  if (Vout >= 1.50) {
    Serial.print("Voltage reading: ");
    Serial.println(Vout, 2); // Print the voltage reading with two decimal places
    char VoutStr[16];
    sprintf(VoutStr, "%.2f", Vout); // Convert float to string
    lv_label_set_text(ui_VoltageLabel, VoutStr);
    lv_timer_handler(); /* let the GUI do its work */
    delay(10);
  } else {
    Serial.println("Volt: 0.00");
    lv_label_set_text(ui_VoltageLabel, "0.00" ); // Set default text to "0.00"
  }
  
  Serial.println("***********");

  // put your main code here, to run repeatedly:
  int karant = (analogRead(WCS1800_PIN));
 // int ye_nya_karant = (karant - 3120);
 // firsekrrha = map_float(ye_nya_karant, 0, 30, 0, 6.9);
  int ye_nya_karant = (karant-3199); //3120
  float firsekrrha = map_float(ye_nya_karant,0,302,0,7.2);
  char firsekrrhaStr[16];
  sprintf(firsekrrhaStr, "%.2f", firsekrrha); // Convert float to string
  if (firsekrrha >= 1.00) {

    Serial.print("Current ye:");
    Serial.println(firsekrrhaStr); 

    lv_label_set_text(ui_CurrentLabel, firsekrrhaStr);
    lv_task_handler();
    delay(10);
  } else {
    Serial.println("Current: 0.00");
    lv_label_set_text(ui_CurrentLabel, "0.00"); // Set default text to "0.00"
  }

  Serial.println("***********");
  measure_SOC(Vout);
  measure_power(Vout, firsekrrha);
  measure_AH(firsekrrha);
  measure_WH(Vout, firsekrrha);
  eco_mode(WHH);
// // Update characteristic value
// char updatedValue[160]; // Adjust the size based on your requirements
// sprintf(updatedValue, "%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f", VoutStr, firsekrrhaStr,pStr,SoStr,AStr,WStr,zStr,eStr,TStr);
// pCharacteristic->setValue(updatedValue);
// pCharacteristic->notify(); // Notify the central device about the updated value
  
  lv_timer_handler(); /* let the GUI do its work */
  delay(1890);
}

// void keyfunction() 
// {
//   // Check if the button is pressed
//   if (digitalRead(BUTTON_PIN) == LOW) {
//     delay(50); // Debounce delay
//     if (digitalRead(BUTTON_PIN) == LOW) {
//       // Button is pressed, switch screens
//       if (lv_scr_act() == ui_Screen1) {
//         lv_scr_load_ui_Screen2(); // Load the second screen
//       } 
//      else if(lv_scr_act() == ui_Screen2){
//         lv_scr_load_ui_Screen3();
//      }
//     else if(lv_scr_act() == ui_Screen3){
//         lv_scr_load_ui_Screen4();
//      }
//       else{
//         lv_scr_load_ui_Screen1();
//       }
//       delay(10); // Add a delay to avoid rapid switching due to button press
//     }
//   }
// }
void temp_bhi_dimak_kharab_krta_hai(){

  V_out = analogRead(Ntcpin);
  R6 = R5 * (4096.0 / (float)V_out - 1.0);
  logR6 = log(R6);
  T = (1.0 / (c1 + c2 * logR6 + c3 * logR6 * logR6 * logR6));
  // convert to Celsius
  T = T - 313.15; //273.15
  char TStr[16];
  sprintf(TStr , "%.2f ",T);
  if(T>=15.0){

  Serial.print("Thermistor reading: ");
  Serial.println(T);
  lv_slider_set_value(ui_TempSlider, int(T), LV_ANIM_ON);  //int(T)
  lv_label_set_text(ui_TempLabel, TStr);
  lv_task_handler();
  delay(10);
  }
  else{
  Serial.println("Temp: 0.00");
  lv_slider_set_value(ui_TempSlider, NULL, LV_ANIM_ON);
  lv_label_set_text(ui_TempLabel, "0");
  lv_task_handler();
  delay(10);
}

  Serial.println("***********");
  lv_timer_handler(); /* let the GUI do its work */
  delay(10);
}

// void bro_I_am_measuring_voltage() {

// }

// void current_aaja_bhai() {

// }


void measure_SOC(float Vout) {
    double soc1 = calculateSOC(Vout);

    if(soc1 >= 0.00) {
        Serial.print("Soc ye: ");
        Serial.print(soc1);
        Serial.println("%");
        Serial.println("***********");

        lv_slider_set_value(ui_SportsSlider, soc1, LV_ANIM_ON);
        char socStr[16];
        sprintf(socStr, "%.2f", soc1);
        lv_label_set_text(ui_SocLabel, socStr);

        lv_task_handler();
        delay(10);
    } else {
        Serial.println("SOC reading: 0.00 ");
        lv_slider_set_value(ui_SportsSlider, NULL, LV_ANIM_ON);
        lv_label_set_text(ui_SocLabel, "0");
    }
    Serial.println("***********");
}


void measure_power(float VoutStr, float firsekrrhaStr){
  float power = (VoutStr * firsekrrhaStr);
  if(power>=0.00){
  char pStr[16];
  sprintf(pStr, "%.2f", power);

  Serial.print("Power reading ye: ");
  Serial.println(pStr);
  lv_label_set_text(ui_PowerLabel ,pStr);
  lv_task_handler();
  delay(10);

  }else{
  Serial.println("power reading: 0.00");
  lv_label_set_text(ui_PowerLabel, "0");
  }
  Serial.println("***********");
}

void measure_AH(float firsekrrhaStr){
  
   AH += firsekrrhaStr * (1.0 / 3600.0); 
   if(AH>=0.00){
    char AStr[16];
    sprintf(AStr, " %.2f ", AH);
    Serial.print("AH reading ye: ");
    Serial.println(AStr);
    lv_label_set_text(ui_AmpHourLabel, AStr);
    lv_task_handler();
    delay(10);

  }else{
    Serial.println("AH reading: 0.00");
    lv_label_set_text(ui_AmpHourLabel, "0");
  }
    Serial.println("***********");
}

void measure_WH(float VoutStr, float firsekrrhaStr){
  WHH += VoutStr * firsekrrhaStr *  (1.0 / 3600.0); //0.001;
   if(WHH>=0.00){
    char WStr[16];
    sprintf(WStr, " %.2f ", WHH);
    Serial.print("WH reading ye: ");
    Serial.println(WStr);
    lv_label_set_text(ui_WattHourLabel, WStr);
    lv_task_handler();
    delay(10);

}else{
    Serial.println("WH reading:0.00 ");
    lv_label_set_text(ui_WattHourLabel, "0");
}
  Serial.println("***********");
}    

// Custom ceil function
int custom_ceil(double num) {
    int integerPart = static_cast<int>(num);
    if (num == integerPart) {
        return integerPart;
    } else {
        return integerPart + 1;
    }
}
void eco_mode(float WHH){
    // Calculate EM using mathematical formula
  int EM = custom_ceil(WHH / 0.75);
  if(EM>=0.15){
    char zStr[16];
    sprintf(zStr , "%.2f ",EM);
    Serial.print("eco mode reading ye: ");
    Serial.println(zStr);
    lv_label_set_text(ui_EcoModeLabel, zStr);
    lv_task_handler();
    delay(10);
  }else{
    lv_label_set_text(ui_EcoModeLabel, "0");
    Serial.println("eco mode reading : 0.00");
  }

    Serial.println("#################");

   if(SM>=0.0){
    char eStr[16];
    sprintf(eStr , "%.2f ",SM);
    Serial.print("Sports mode reading ye: ");
    Serial.println(eStr);
    lv_label_set_text(ui_SportsModeLabel, eStr);
    lv_task_handler();
    delay(10);
  }else{
    Serial.print("Sports mode reading : 0.00 ");
    lv_label_set_text(ui_SportsModeLabel, "0");
  }
   Serial.println("#################");
}
