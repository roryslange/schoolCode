int clock = 6;
int latch = 5;
int data = 4;
//int seq[] = {129, 66, 36, 24, 36, 66}; //b
int seq[] = {1,2,4,8,16,32,64,128,64,32,16,8,4,2}; //a

void setup() {
  // put your setup code here, to run once:
  for (int i = 4; i <= 6; i++)
    pinMode(i, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < 14; i++) {  //7 for b, 14 for a
    digitalWrite(latch, LOW);
    shiftOut(data, clock, MSBFIRST, seq[i]);
    digitalWrite(latch, HIGH);
    delay(75);
  }

}
