const int LedPin1=10;
const int LedPin2=11;

void setup()
{
  pinMode(LedPin1, OUTPUT);
  pinMode(LedPin2, OUTPUT);
  
}

void loop()
{

  digitalWrite(LedPin1, HIGH);
  delay(750); // Wait for 750 millisecond(s)
  digitalWrite(LedPin1, LOW);
  delay(350); // Wait for 350 millisecond(s)
  
  digitalWrite(LedPin2, HIGH);
  delay(400); // Wait for 400 millisecond(s)
  digitalWrite(LedPin2, LOW);
  delay(600); // Wait for 600 millisecons(s)
}
