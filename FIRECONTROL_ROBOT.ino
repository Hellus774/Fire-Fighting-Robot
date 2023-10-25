//Fire-Fighting-Robot
int L = 0;
int R = 0;
int F = 0;
void setup()
{
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop()
{
  L = analogRead(A0);
  R = analogRead(A1);
  F = analogRead(A2);
  
  if (F > 400)
  {
    digitalWrite(7, HIGH);
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
    delay(100); // Wait for 100 millisecond(s)
  }
  else
  {
      digitalWrite(7, LOW);
      delay(100);
      if (L > 400 && R > 400) 
      {
      digitalWrite(10, HIGH);
      digitalWrite(9, HIGH);
      delay(100); // Wait for 100 millisecond(s)
      } 

      else if (L > 400 && R < 400)
      {
        digitalWrite(10, HIGH);
        digitalWrite(9, LOW);
        delay(100); // Wait for 100 millisecond(s)

      }

      else if (L < 400 && R > 400)
      {
        digitalWrite(10, LOW);
        digitalWrite(9, HIGH);
        delay(100); // Wait for 100 millisecond(s)

      }

      else {
        digitalWrite(10, LOW);
        digitalWrite(9, LOW);
        delay(100); // Wait for 100 millisecond(s)
      }
    }
  
}
