/*
 * project-ecos-blueprint - Automated Micro-Farm Node
 * Description: Automated local loop for soil moisture monitoring and pump control.
 * Target Hardware: ESP32
 */

// Pin Definitions
const int SOIL_MOISTURE_PIN = 34; // Analog pin for moisture sensor
const int PUMP_RELAY_PIN    = 25; // Digital pin controlling the pump relay

// Automation Thresholds
const int DRY_THRESHOLD     = 1500; // Calibrate this value based on your sensor (Lower = Wetter, Higher = Dryer)
const int WATERING_TIME_MS  = 5000; // How long to run the pump (5 seconds)
const int CHECK_INTERVAL_MS = 60000; // Time between soil checks (1 minute)

void setup() {
  // Initialize serial communication for local debugging diagnostics
  Serial.begin(115200);
  
  // Configure the pump relay pin as an output
  pinMode(PUMP_RELAY_PIN, OUTPUT);
  
  // Ensure the pump is explicitly turned OFF at startup
  digitalWrite(PUMP_RELAY_PIN, LOW);
  
  Serial.println("Ecos-Blueprint Micro-Farm Node Initialized.");
}

void loop() {
  // Read the analog value from the moisture sensor
  int moistureValue = analogRead(SOIL_MOISTURE_PIN);
  
  Serial.print("Current Soil Moisture Raw Value: ");
  Serial.println(moistureValue);
  
  // Check if the soil moisture level is below the acceptable dryness threshold
  if (moistureValue > DRY_THRESHOLD) {
    Serial.println("Soil is dry. Initiating local watering sequence...");
    triggerWatering();
  } else {
    Serial.println("Soil moisture level is adequate.");
  }
  
  // Pause execution until the next scheduled check interval
  delay(CHECK_INTERVAL_MS);
}

// Function handling the isolated watering cycle logic
void triggerWatering() {
  Serial.println("Pump turned ON.");
  digitalWrite(PUMP_RELAY_PIN, HIGH); // Activate relay to start pump
  
  delay(WATERING_TIME_MS);            // Keep pump running for designated duration
  
  digitalWrite(PUMP_RELAY_PIN, LOW);  // Deactivate relay to stop pump
  Serial.println("Pump turned OFF. Watering sequence complete.");
}
