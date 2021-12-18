byte counter;

void setup(){
  Serial.begin(9600);
  for(int i=2;i<10;i++)  {
    pinMode(i,OUTPUT);
    digitalWrite(i,LOW);   
  }
}
    
void loop(){
  for (int i=0;i<8;i++) {
    if (bitRead(counter,i)==1) {
      digitalWrite(i,HIGH);
    }
    else {
      digitalWrite(i, LOW);
    }
  }
  delay (300);
  counter=counter+1;//count the counter up by one. ("counter++;")this is short form of this line.
  Serial.print(counter); //send the counter value.
  Serial.print(" as binary number: "); //send this string.
  Serial.println(counter,BIN);
  }
