#define SENSOR_PIN 34

void setup() {
  Serial.begin(115200);
  delay(1000);
  Serial.println("ESP32 Sensor Data Logger Started");
}

void loop() {
  int rawValue = analogRead(SENSOR_PIN);
  float voltage = (rawValue / 4095.0) * 3.3;

  Serial.print("Raw: ");
  Serial.print(rawValue);
  Serial.print(" | Voltage: ");
  Serial.println(voltage, 2);

  delay(1000);
}