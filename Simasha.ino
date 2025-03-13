#define LED_PIN 13

void setup() {
  pinMode(LED_PIN, OUTPUT); // Set LED pin as output
}

// Function to blink a dot (short blink)
void dot() {
  digitalWrite(LED_PIN, HIGH);
  delay(200); // LED on for 200ms (short blink)
  digitalWrite(LED_PIN, LOW);
  delay(200); // Pause after blink
}

// Function to blink a dash (long blink)
void dash() {
  digitalWrite(LED_PIN, HIGH);
  delay(600); // LED on for 600ms (long blink)
  digitalWrite(LED_PIN, LOW);
  delay(200); // Pause after blink
}

// Function to create space between letters
void letterSpace() {
  delay(1000); // Pause between letters (1 second)
}

// Blink the name "SIMASHA" in Morse code
void blinkSimasha() {
  // S: ...
  dot(); dot(); dot(); letterSpace();

  // I: ..
  dot(); dot(); letterSpace();

  // M: --
  dash(); dash(); letterSpace();

  // A: .-
  dot(); dash(); letterSpace();

  // S: ...
  dot(); dot(); dot(); letterSpace();

  // H: ....
  dot(); dot(); dot(); dot(); letterSpace();

  // A: .-
  dot(); dash(); letterSpace();
}

void loop() {
  blinkSimasha(); // Call the function 
  delay(3000);    // Wait before repeating
}
