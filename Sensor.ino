// IoT Task 2 - Reading Analog Sensor (Potentiometer)

#define SENSOR_PIN 34   // Potentiometer signal connected to GPIO34

void setup() {
  Serial.begin(115200);   // Start Serial Monitor
}

void loop() {
  int sensorValue = analogRead(SENSOR_PIN);   // Read analog value (0–4095)

  // Convert to voltage (0–3.3V)
  float voltage = sensorValue * (3.3 / 4095.0);

  Serial.print("Sensor Value: ");
  Serial.print(sensorValue);
  Serial.print(" | Voltage: ");
  Serial.print(voltage);
  Serial.println(" V");

  delay(2000);   // Read every 2 seconds
}
