const int LEDPIN1=6;
const int LEDPIN2=7;
const int LEDPIN3=8;
const int LEDPIN4=9;
const int LEDPIN5=10;
const int LEDPIN6=11;
const int LEDPIN7=12;
const int LEDPIN8=13;
void setup()
{
  pinMode(LEDPIN1, OUTPUT);
  pinMode(LEDPIN2, OUTPUT);
  pinMode(LEDPIN3, OUTPUT);
  pinMode(LEDPIN4, OUTPUT);
  pinMode(LEDPIN5, OUTPUT);
  pinMode(LEDPIN6, OUTPUT);
  pinMode(LEDPIN7, OUTPUT);
  pinMode(LEDPIN8, OUTPUT);
}

void loop()
{

  digitalWrite(LEDPIN1, HIGH);
  delay(781); // Wait for 781 millisecond(s)
  digitalWrite(LEDPIN1, LOW);
  delay(515); // Wait for 515 millisecond(s)
  
  digitalWrite(LEDPIN2, HIGH);
  delay(2014); // Wait for 2014 millisecond(s)
  digitalWrite(LEDPIN2, LOW);
  delay(1348); // Wait for 1348 millisecons(s)

  digitalWrite(LEDPIN3, HIGH);
  delay(343); // Wait for 343 millisecond(s)
  digitalWrite(LEDPIN3, LOW);
  delay(573); // Wait for 573 millisecons(s)

  digitalWrite(LEDPIN4, HIGH);
  delay(678); // Wait for 678 millisecond(s)
  digitalWrite(LEDPIN4, LOW);
  delay(1839); // Wait for 1839 millisecons(s)

  digitalWrite(LEDPIN5, HIGH);
  delay(342); // Wait for 342 millisecond(s)
  digitalWrite(LEDPIN5, LOW);
  delay(534); // Wait for 534 millisecond(s)
  
  digitalWrite(LEDPIN6, HIGH);
  delay(1478); // Wait for 1478 millisecond(s)
  digitalWrite(LEDPIN6, LOW);
  delay(326); // Wait for 326 millisecons(s)

  digitalWrite(LEDPIN7, HIGH);
  delay(1859); // Wait for 1859 millisecond(s)
  digitalWrite(LEDPIN7, LOW);
  delay(351); // Wait for 351 millisecons(s)

  digitalWrite(LEDPIN8, HIGH);
  delay(777); // Wait for 777 millisecond(s)
  digitalWrite(LEDPIN8, LOW);
  delay(888); // Wait for 888 millisecons(s)
}
