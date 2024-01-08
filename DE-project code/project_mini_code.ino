void setup()
{
  pinMode(8,OUTPUT);
  pinMode(0,OUTPUT);

}

void loop() 
{
  if(digitalRead(0)==LOW)
  {
    digitalWrite(8,HIGH);
    delay(1000);
  }
  else
  {
    digitalWrite(8,LOW);
    delay(1000);
  }

}
