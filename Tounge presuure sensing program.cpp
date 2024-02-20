// Include necessary libraries for your sensor
#include <TonguePressureSensorLibrary.h>  // Replace with the actual library for your sensor

// Define constants for sensor pin or any other configurations
const int sensorPin = A0;  // Replace with the actual pin connected to your sensor

// Variables to store pressure values
int currentPressure = 0;
int maxPressure = 0;

void setup() {
  // Initialize Serial communication for debugging
  Serial.begin(9600);

  // Initialize Tongue Pressure Sensor
  TonguePressureSensor.begin();  // Replace with actual initialization code
}

void loop() {
  // Read tongue pressure sensor value
  currentPressure = TonguePressureSensor.readPressure(sensorPin);  // Replace with actual read function

  // Update maximum pressure if the current pressure is higher
  if (currentPressure > maxPressure) {
    maxPressure = currentPressure;
  }

  // Print the current and maximum pressure to Serial Monitor with enhanced precision
  Serial.print("Current Pressure: ");
  Serial.print(currentPressure, 3);  // Adjust the precision (number of decimal places) as needed
  Serial.print(" | Max Pressure: ");
  Serial.println(maxPressure, 3);     // Adjust the precision (number of decimal places) as needed

  // Add any additional logic or actions based on pressure values

  // Introduce a delay to control the frequency of readings
  delay(1000);  // Adjust as needed
}
