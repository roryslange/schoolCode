int ledPin = 12;
int ledPin1 = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin1, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin, HIGH);
  delay(500);
  digitalWrite(ledPin, LOW);
  delay(500);
  digitalWrite(ledPin1, HIGH);
  delay(500);
  digitalWrite(ledPin1, LOW);
  delay(500);
}
