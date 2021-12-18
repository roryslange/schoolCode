int randomNum;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  //print random numbers with no seed value
  Serial.println("print 40 random numbers between 0 and 39");
  for (int i = 0; i < 40; i++) {
    randomNum = random(40);
    Serial.print(randomNum);
    Serial.print(" ");
  }
  Serial.println();

  Serial.println("print 50 random numbers between 25 and 65");
  for (int i = 0; i < 50; i++) {
    randomNum = random(25,66);
    Serial.print(randomNum);
    Serial.print(" ");
  }
  Serial.println();
  randomSeed(analogRead(0));

  Serial.println("print 35 random numbers between 36 and 94 after floating seed");
  for (int i = 0; i < 35; i++) {
    randomNum = random(36, 95);
    Serial.print(randomNum);
    Serial.print(" ");
  }
  Serial.println();
  Serial.println();
}

void loop() {
  // put your main code here, to run repeatedly:

}
