int analogin=0;
void setup() {
  pinMode(analogin,INPUT);
  Serial.begin(9600);
 
}

void loop() {
  float value = analogRead(analogin);
  float mv_value=(value/1024)*5000;

  float temp_in_c = mv_value/10;

  Serial.println("temp in c:");
  Serial.print(temp_in_c);
  delay(1000);
  // put your main code here, to run repeatedly:

}
