#define motor_A 4
#define motor_B 5
#define motor_C 1
#define motor_D 2

void setup() {
  Serial.begin(115200);

  pinMode(motor_A, OUTPUT);
  pinMode(motor_B, OUTPUT);
  pinMode(motor_C, OUTPUT);
  pinMode(motor_D, OUTPUT);
}

void loop() {
  one_by_one();
  delay(1000);
  all();
}

void one_by_one() {
  analogWrite(motor_A, 255);
  delay(5000);
  analogWrite(motor_A, 0);

  analogWrite(motor_B, 255);
  delay(5000);
  analogWrite(motor_B, 0);

  analogWrite(motor_C, 255);
  delay(5000);
  analogWrite(motor_C, 0);

  analogWrite(motor_D, 255);
  delay(5000);
  analogWrite(motor_D, 0);
}

void all() {
  digitalWrite(motor_A, HIGH);
  digitalWrite(motor_B, HIGH);
  digitalWrite(motor_C, HIGH);
  digitalWrite(motor_D, HIGH);
  delay(10000);
}
