void setup() {
  char my_str[] = "Hello World";
  Serial.begin(9600);
  Serial.println(my_str);

  Serial.print("Size of the text:");
  Serial.println(sizeof(my_str));
  Serial.println(strlen(my_str));

  String text = "Hello world from Joe.";
  Serial.println(text);

  Serial.println(text.length());
  text.toUpperCase();
  Serial.println(text);
  text.replace("Joe", "Arduino Sketch");
  Serial.println(text);
}

void loop() {
  
}
