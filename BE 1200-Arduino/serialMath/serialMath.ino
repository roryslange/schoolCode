int a = 5;
int b = 40;
int c = 20;




void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  Serial.println("Here is some math: ");

  Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);
  Serial.print("c = ");
  Serial.println(c);

  Serial.print("a + b = ");
  Serial.println(a + b);
  Serial.print("a * c = ");
  Serial.println(a * c);
  Serial.print("c / a = ");
  Serial.println(c / a);
  Serial.print("b - c = ");
  Serial.println(b - c);

  
}

void loop() {
  // put your main code here, to run repeatedly:

}
