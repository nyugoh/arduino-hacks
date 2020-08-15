int ledPin = 11;
int brightness = 0;
int increment = 5;
int interval = 25;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  analogWrite(ledPin, brightness);
  delay(interval);
  brightness += increment;

  if(brightness <= 0 || brightness >= 255){
    increment = -increment;
  }
}
