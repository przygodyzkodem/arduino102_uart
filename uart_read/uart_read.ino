const double pi = 3.14;

void setup() {
  Serial.begin(115200);
  Serial.println("Arduino UART is ready!");
  Serial.print("Enter radius value: ");
}

void loop() {
  if(Serial.available()) {
    String serialInput = Serial.readStringUntil('\n');
    Serial.print(serialInput);
    Serial.print("\t");
    Serial.println(circleCircumference(serialInput.toFloat()));
    Serial.print("Enter radius value: ");
  }
}

String circleCircumference(float radius) { 
  float circumference = 2 * pi * radius;
  String resultDescription = "Circle cirfumference: " + String(circumference);
  return resultDescription;
}
