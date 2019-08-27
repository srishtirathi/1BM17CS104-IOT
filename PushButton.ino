int ledPin=13;
int pushButton=2;

void setup()
{
  pinMode(ledPin,OUTPUT);
  pinMode(pushButton,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(ledPin,LOW);
  int x=digitalRead(pushButton);
  if(x==1)
  {
    digitalWrite(ledPin,HIGH);
    Serial.println("light on");
  }
  else
  {
    digitalWrite(ledPin,LOW);
    Serial.println("light off");
  }
}
