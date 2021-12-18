int led = 10;


void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  Serial.begin(9600);
  while (!Serial);
  Serial.println("Input 1 to turn led on and 2 to turn led off");
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()) {
    int state = Serial.parseInt();
    if (state == 1){
      digitalWrite(led, HIGH);
      Serial.println("Led on");
    }
    else if(state == 2){
      digitalWrite(led, LOW);
      Serial.println("Led off");
    }
  }


}
