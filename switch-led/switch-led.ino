int ledPin = 4;
int switchPin = 8;
int reading;
int switchState = LOW;
int ledState = LOW;
/*
Using a switch to control the LED
*/
void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  reading = digitalRead(switchPin);
  if(reading != switchState) { // Check if switch state has changed
    if(reading == HIGH && switchState == LOW) ledState = !ledState;
    digitalWrite(ledPin, ledState); 
    // Update switch state
    switchState = reading;
  }
}
