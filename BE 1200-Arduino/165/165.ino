int clock = 6;
int latch = 5;
int data = 4;

void setup() {
  // put your setup code here, to run once:
  for (int i = 4; i <= 6; i++)
    pinMode(i, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i <= 128; i++) {
    digitalWrite(latch, LOW);
    shiftOut(data, clock, LSBFIRST, i);
    digitalWrite(latch, HIGH);
    delay(1000);
  }

}
