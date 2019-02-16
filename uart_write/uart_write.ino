int powerOfTwo = 1;
int exponent = 0;

void setup() {
  Serial.begin(115200);
  Serial.println("Arduino UART is ready!");
}

void loop() {
  Serial.print("2 to the power of ");
  Serial.print(exponent);
  Serial.print(" is ");
  Serial.println(powerOfTwo);
  
  exponent++;
  powerOfTwo += powerOfTwo;
 
  delay(1000);
}
