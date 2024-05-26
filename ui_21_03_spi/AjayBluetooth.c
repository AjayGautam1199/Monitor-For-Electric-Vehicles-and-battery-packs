#include <BLEDevice.h>
//ajay gautam
String(voltageStr);
String(CStr);
String(pStr);
String(SoStr);
String(AStr);
String(WStr);
String(eStr);
String(zStr);
String(TStr);
String (updatedValue);
const int MIN_VALUE = 1;
// char TStr[8];
// char voltageStr[8];
// char CStr[8];
// char SoStr[8];
// char pStr[8];
// char AStr[8];
// char WStr[8];
// char zStr[8];
// char eStr[8];
// Define BLE variables
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
  // Initialize BLE
  BLEDevice::init("BTA!G");
  pServer = BLEDevice::createServer();
  pService = pServer->createService("4fafc201-1fb5-459e-8fcc-c5c9c331914b");
  pCharacteristic = pService->createCharacteristic("beb5483e-36e1-4688-b7f5-ea07361b26a8", BLECharacteristic::PROPERTY_READ | BLECharacteristic::PROPERTY_WRITE);

  // Set callback for characteristic
  pCharacteristic->setCallbacks(new MyCallbacks());

  // Set initial value for characteristic
  // String initialValue = "Voltage" + String(minValue) + ", Current" + String(minValue) + ", Power" + String(minValue) + ", SOC" + String(minValue) + ", AMP-Hour" + String(minValue) + ", WATT-Hour" + String(minValue) + ", ECO-Mode" + String(minValue) + ", Sports-Mode" + String(minValue)+ ", Temperature" + String(minValue);
  // pCharacteristic->setValue(initialValue.c_str());

  // Start the BLE service and advertising
  pService->start();
  BLEAdvertising *pAdvertising = pServer->getAdvertising();
  pAdvertising->start();
    // Update characteristic value
  String updatedValue = "Voltage" + voltageStr + ", Current" + CStr + ", Power" + pStr + ", SOC" + SoStr + ", AMP-Hour" + AStr + ", WATT-Hour" + WStr + ", ECO-Mode" + zStr + ", Sports-Mode" + eStr + ", Temperature" + TStr;
  pCharacteristic->setValue(updatedValue.c_str());

