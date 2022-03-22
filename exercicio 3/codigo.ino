// C++ code
//
void setup()
{
  pinMode(2, OUTPUT);
}

void loop()
{
  digitalWrite(2, HIGH);
  delay(2000);
   digitalWrite(3, HIGH);
  delay(2000);
   digitalWrite(4, HIGH);
  delay(2000);
   digitalWrite(7, HIGH);
  delay(2000);
  digitalWrite(8, HIGH);
  delay(2000);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(2, LOW);
  delay(2000);
}
