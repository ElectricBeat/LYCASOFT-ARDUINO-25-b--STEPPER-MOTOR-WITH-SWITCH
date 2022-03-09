const int buttonPin_1 = 8;   
int buttonState_1 = 0; 
const int buttonPin_2 = 9;   
int buttonState_2 = 0; 

int a,b;

void setup() 
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(buttonPin_1, INPUT); 
  pinMode(buttonPin_2, INPUT); 
}

void loop() 
{
  buttonState_1 = digitalRead(buttonPin_1);
  buttonState_2 = digitalRead(buttonPin_2);
  
  if (buttonState_1 == HIGH) 
  {
    a=1;
    b=0;
  } 

   if(a==1)
   {
    digitalWrite(5, LOW);
    digitalWrite(2, HIGH);
    delay(2);
    digitalWrite(2, LOW);
    digitalWrite(4, HIGH);
    delay(2);
    digitalWrite(4, LOW);
    digitalWrite(3, HIGH);
    delay(2);
    digitalWrite(3, LOW);
    digitalWrite(5, HIGH);
    delay(2);
  }
  
  
  if (buttonState_2 == HIGH) 
  {
    a=0;
    b=1;
  }

  if(b==1)
  {
    digitalWrite(2, LOW);
    digitalWrite(5, HIGH);
    delay(2);
    digitalWrite(5, LOW);
    digitalWrite(3, HIGH);
    delay(2);
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    delay(2);
    digitalWrite(4, LOW);
    digitalWrite(2, HIGH);
    delay(2);
  }
  else
  {
    digitalWrite(2, LOW);
    digitalWrite(5, LOW);
    digitalWrite(2, LOW);
    digitalWrite(5, LOW);
  }
}
