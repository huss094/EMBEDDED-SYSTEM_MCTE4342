int A_count=0;
int B_count=0;
int C_count=0;



void setup() {

  Serial.begin(9600);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);

  Serial.print("A="),Serial.print("0"),
  Serial.print(" B="),Serial.print("0"),
  Serial.print(" C="),Serial.println("0");
 

  
}

void loop()
{
int A_state = digitalRead(5);
int B_state = digitalRead(6);
int C_state = digitalRead(7);


if (A_state ==0){
    A_count ++;
  
}
else 
{}
if (B_state ==0){
    B_count ++;
  
}
else 
{}
if (C_state ==0){
    C_count ++;
   
}

else 
{}
  if (A_state ==0 || B_state ==0 || C_state ==0 )
  {Serial.print("A="),Serial.print(A_count),
  Serial.print(" B="),Serial.print(B_count),
  Serial.print(" C="),Serial.println(C_count);
 
  delay (1000);
  
  }
  else
  {}
}
