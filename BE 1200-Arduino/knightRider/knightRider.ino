
void setup() {
  // put your setup code here, to run once:

  for (int i = 2; i <= 9; i++) {
    pinMode(i, OUTPUT);
  }

}

void loop() {
  // put your main code here, to run repeatedly:

  for (int i = 2; i <= 9; i++) {
     
     digitalWrite(i, HIGH);
     delay(50);
     digitalWrite(i, LOW);M
    
  }

}
