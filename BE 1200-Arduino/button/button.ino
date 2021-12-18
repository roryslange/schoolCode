int led = 5;
int button = 2;
int led1 = 6;
int led2 = 7;
void setup()
{
  pinMode(led, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(button, INPUT);

}

void loop()
{

  int sig = digitalRead(button);
  
  if (sig == 1) {
     digitalWrite(led, HIGH); 
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
  }
  
  if (sig == 0) {
    digitalWrite(led, LOW);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
  }
  
  delay(10);
}
