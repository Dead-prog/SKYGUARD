#define motor_A 41

void setup() {
  Serial.begin(115200);

  pinMode(motor_A, OUTPUT);
}

void loop() {
  gear_1();
  delay(5000);
  gear_2();
  delay(5000);
  gear_3();
  delay(5000);
}

void gear_1() {
  analogWrite(motor_A, 100);
  Serial.println("GEAR 1");
}

void gear_2() {
  analogWrite(motor_A, 200);
  Serial.println("GEAR 2");
}

void gear_3() {
  analogWrite(motor_A, 255);
  Serial.println("GEAR 3");
}
