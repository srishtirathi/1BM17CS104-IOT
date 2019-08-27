void setup() {
 pinMode(13,OUTPUT);
 pinMode(2,INPUT);// put your setup code here, to run once:

}

void loop() {
  int buttonread=0;
  buttonread=digitalRead(2);
  if(buttonread==HIGH)
  {
    digitalWrite(13,HIGH);
  }
  else
  {
    digitalWrite(13,LOW);// put your main code here, to run repeatedly:
  }

}
