// Define the pins for controlling the BTS7960 motor driver
const int enablePin = 9;  // Connect to the EN pin on the BTS7960
const int in1Pin = 10;    // Connect to the IN1 pin on the BTS7960
const int in2Pin = 11;    // Connect to the IN2 pin on the BTS7960

void setup() {
  // Initialize the motor control pins
  pinMode(enablePin, OUTPUT);
  pinMode(in1Pin, OUTPUT);
  pinMode(in2Pin, OUTPUT);
  
  // Ensure the motor is initially turned off
  digitalWrite(enablePin, LOW);
  digitalWrite(in1Pin, LOW);
  digitalWrite(in2Pin, LOW);

  // Initialize serial communication
  Serial.begin(9600);
  Serial.println("Arduino Motor Control Example");
}

void loop() {
  // Delay for 1 minute (60,000 milliseconds)
  delay(60000);

  // Turn on the motor
  digitalWrite(enablePin, HIGH);  // Enable the motor driver
  digitalWrite(in1Pin, HIGH);     // Set IN1 to HIGH
  digitalWrite(in2Pin, LOW);      // Set IN2 to LOW

  // Run the motor for 5 seconds
  delay(5000);

  // Turn off the motor
  digitalWrite(enablePin, LOW);   // Disable the motor driver
  digitalWrite(in1Pin, LOW);      // Set IN1 to LOW
  digitalWrite(in2Pin, LOW);      // Set IN2 to LOW

  Serial.println("Motor started for 5 seconds after a 1-minute delay.");
}
