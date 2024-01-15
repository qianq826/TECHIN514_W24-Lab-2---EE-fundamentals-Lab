#include <Arduino.h>

const int analogPin = A0; // Replace with your analog pin number

void setup() {
  Serial.begin(115200); // Start the serial communication at 115200 baud rate
  pinMode(analogPin, INPUT); // Initialize the analog pin as input
}

void loop() {
  int adcValue = analogRead(analogPin); // Read the analog value from the pin
  float voltage = (adcValue / 4095.0) * 3.3; // Convert the ADC value to voltage

  // Print the voltage to the serial monitor
  Serial.print("Voltage: ");
  Serial.print(voltage);
  Serial.println(" V");

  delay(1000); // Wait for a second before the next read
}

