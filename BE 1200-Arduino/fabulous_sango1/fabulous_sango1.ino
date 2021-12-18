int x = 0;

void setup()
{
  for (int i = 2; i <= 5; i++) {
   	pinMode(i, OUTPUT); 
  }
}

void loop()
{
  x = x^1;
  for (int i = 2; i <= 5; i++) {
   	digitalWrite(i, x); 
  }
  delay(500);
}