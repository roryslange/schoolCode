long randomNumber;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  randomSeed(analogRead(0));
}

void loop() {
  // put your main code here, to run repeatedly:
  //print a random number from 0 to 40
  randomNumber = random(41);
  Serial.print(randomNumber);
  Serial.print("\t");
  delay(500);


  //print a random number from 66 to 150
  randomNumber = random(66, 151);
  Serial.println(randomNumber);
  delay(500);
}
