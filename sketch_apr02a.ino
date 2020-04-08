#define BLYNK_PRINT Serial

#include <BlynkSimpleEsp8266.h>
#include <Servo.h>

Servo servo;

char auth[] = "ADaLUb7PZZilCFB528yzmSRq6RYw1T3o";
char ssid[] = "true_home2G_6A9";
char pass[] = "6DT7GKhu";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);

void loop() {
  // put your main code here, to run repeatedly:
  Blynk.run();

}

BLYNK_WRITE(V1)
{
  servo.write(param.asInt());
}

BLYNK_WRITE(V2)
{
  servo.write(0);
}

BLYNK_WRITE(V3)
{
  servo.write(90);
}
