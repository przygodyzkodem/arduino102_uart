const double pi = 3.14;
float radius = 1.0;
String serialInput;

void setup() {
  Serial.begin(115200);
  Serial.println("Arduino UART is ready!");
  Serial.print("Enter radius value: ");
}

void loop() {
  if(Serial.available()) {
    serialInput = Serial.readStringUntil('\n');
    Serial.print(serialInput);
    Serial.print("\t");
    float circumference = circleCircumference(serialInput.toFloat());
    Serial.print("Circle circumference: ");
    Serial.println(circumference);
    Serial.print("Enter radius value: ");
  }
}

float circleCircumference(float radius) { 
  return 2 * pi * radius;
}
