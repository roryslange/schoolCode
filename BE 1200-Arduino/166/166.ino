int clock = 6;
int latch = 5;
int data = 4;

void setup() {
  // put your setup code here, to run once:
  for (int i = 4; i <= 6; i++)
    pinMode(i, OUTPUT);

  Serial.begin(9600);
  Serial.println("Enter LED Number 0 to 7 or 'x' to clear");
}

void loop() {
  // put your main code here, to run repeatedly:

}
