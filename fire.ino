int led = 9;
int buzz = 8;
int analogpin = 0;
int threshold = 500;


void setup() {

   pinMode(led, OUTPUT);
   pinMode(buzz,OUTPUT);
   pinMode(analogpin, INPUT);
   Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {

  int sensedValue = analogRead(analogpin);
  if(sensedValue<100){
         digitalWrite(led,HIGH);
         digitalWrite(buzz,HIGH);
         Serial.println("fire...");
         delay(3000);
  }
  else{
    Serial.println(sensedValue);
    digitalWrite(led,LOW);
    digitalWrite(buzz,LOW);    
  }
  // put your main code here, to run repeatedly:

}
