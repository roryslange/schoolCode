#include <Servo.h>

int bt1 = 2;
int bt2 = 3;
int pos = 0;

Servo servo;

void setup()
{
  servo.attach(9);
  Serial.begin(9600);
  pinMode(bt1, INPUT);
  pinMode(bt2, INPUT);
}

void loop()
{
  if (digitalRead(bt1) == HIGH && pos<180) {
  	pos++;
    servo.write(pos);
    delay(15);
    Serial.println(pos);
  }
  
  if (digitalRead(bt2) == HIGH && pos>0) {
    pos--;
    servo.write(pos);
    delay(15);
    Serial.println(pos);
  }
}