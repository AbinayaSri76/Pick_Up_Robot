const int xpin = A0;
const int ypin = A1;
//const int zpin = A2;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int x ,y;
  x = analogRead(xpin);
  y = analogRead(ypin);
  Serial.print(x);
  Serial.print("\t");
  Serial.print(y);
  Serial.print("\t");
  if (x >= 370)
  {
    Serial.println("LEFT");
  }
  else if (x <= 290)
  {
    Serial.println("RIGHT");
  }
  if (y <= 290)
  {
    Serial.println("FORWARD");
  }
  else if (y >= 370)
  {
    Serial.println("BACKWARD");
  }
  if(x < 370 && x > 290 && y > 290 && y < 370)
  {
    Serial.println("NORMAL");
  }
  delay(2000);
}
