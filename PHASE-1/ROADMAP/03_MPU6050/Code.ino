#include <Wire.h>
#include <MPU6050.h>
#include <I2Cdev.h>
#include <math.h>

MPU6050 mpu;

int16_t ax, ay, az;

float pitch, roll;

void setup() {
  Wire.begin();
  Serial.begin(115200);

  mpu.initialize();

  if (!mpu.testConnection()) {
    Serial.println("MPU6050 connection failed");
    while (1);
  }

  Serial.println("MPU6050 connected");
}

void loop() {
  mpu.getAcceleration(&ax, &ay, &az);

  // Calcul des angles en degrés
  pitch = atan2f(-ax, sqrtf((float)ay * ay + (float)az * az))
          * 180.0f / PI;

  roll = atan2f(ay, az) * 180.0f / PI;

  // Affichage
  Serial.print("Pitch: ");
  Serial.print(pitch, 2);
  Serial.print(" deg\t");

  Serial.print("Roll: ");
  Serial.print(roll, 2);
  Serial.println(" deg");

  delay(100);
}
