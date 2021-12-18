int leds[] = {2,3,4,5,6,7,8,9};

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for (int i = 0; i <= sizeof(leds); i++)
    pinMode(leds[i], OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int i = random(8);
  digitalWrite(leds[i], 1);
  delay(100);
  digitalWrite(leds[i], 0);
  Serial.println(i);
}
