const int ledPin = 18; // Choose your desired GPIO pin

void setup() {
    pinMode(ledPin, OUTPUT); // Set your chosen pin as an output
}

void loop() {
    digitalWrite(ledPin, HIGH); // Illuminate the LED
    delay(250); // Pause for dramatic effect
    digitalWrite(ledPin, LOW); // Dim the LED
    delay(250); // Another pause for flair
}
