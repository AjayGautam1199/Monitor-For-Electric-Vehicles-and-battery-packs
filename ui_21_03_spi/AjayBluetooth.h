#include <BLEDevice.h>

BLEServer *pServer;
BLEService *pService;
BLECharacteristic *pCharacteristic;

// Callbacks for BLE characteristics
class MyCallbacks : public BLECharacteristicCallbacks {
  void onWrite(BLECharacteristic *pCharacteristic) {
    std::string value = pCharacteristic->getValue();

    if (value.length() > 0) {
      Serial.println("*********");
      Serial.print("New value: ");
      for (int i = 0; i < value.length(); i++)
        Serial.print(value[i]);

      Serial.println();
      Serial.println("*********");
    }
  }
};
void start_kr_re_bluetooth(){
  // Initialize BLE
  BLEDevice::init("BTA!G");
  pServer = BLEDevice::createServer();
  pService = pServer->createService("4fafc201-1fb5-459e-8fcc-c5c9c331914b");
  pCharacteristic = pService->createCharacteristic("beb5483e-36e1-4688-b7f5-ea07361b26a8", BLECharacteristic::PROPERTY_READ | BLECharacteristic::PROPERTY_WRITE);

  // Set callback for characteristic
  pCharacteristic->setCallbacks(new MyCallbacks());

  // Start the BLE service and advertising
  pService->start();
  BLEAdvertising *pAdvertising = pServer->getAdvertising();
  pAdvertising->start();
}
void Chla_esko_loop_me (){
  // Update characteristic value
// Update characteristic value
char updatedValue[100]; // Adjust the size based on your requirements
sprintf(updatedValue, "%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f", Vout, firsekrrha,pStr,SoStr,AStr,WStr,zStr,eStr,TStr);
pCharacteristic->setValue(updatedValue);

}
