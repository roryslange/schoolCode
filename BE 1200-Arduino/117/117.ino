void setup() {
  pinMode(5, OUTPUT);
  pinMode(12, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  if (Serial.available() > 0) {
    int command = Serial.read();
    if (command == '1') {
      digitalWrite(12, HIGH);
    }
    if (command == '2') {
      digitalWrite(12, LOW);
    }
    if (command == '3') {
      digitalWrite(5, HIGH);
    }
    if (command == '4') {
      digitalWrite(5, LOW);
    }
    else {
      if (command == '5') {
        for (int Val = 0; Val < 50; Val++) {
          Serial.print("DEC = ");
          Serial.println(Val, DEC);
          Serial.print("HEX = ");
          Serial.println(Val, HEX);
          Serial.print("OCT = ");
          Serial.println(Val, OCT);
          Serial.print("BIN = ");
          Serial.println(Val, BIN);
          Serial.println();
        }
      }
    }
  }
}
