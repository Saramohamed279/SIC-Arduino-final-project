#include <Servo.h>
Servo myservo;

int buttonstat = 13;
int press1 = 0;
int ldr = A0;
int ser = 9;
int buzz = 2;
int angle = 0;
int ldrval = 0;
int con = 0;
int count = 0;
int ldrout = 0;


void setup()
{
  pinMode(buttonstat, INPUT);
  pinMode(buzz, OUTPUT);
  myservo.attach(ser);
 digitalWrite(buzz, LOW);
  Serial.begin(9600);
}

void loop()
{
  myservo.write(0);
  press1 = digitalRead(buttonstat);
  if (press1 == HIGH || con == 1)
  {
     con = 1;
    ldrval = analogRead(ldr);
    ldrout = analogRead(A1);
    Serial.print("ldr input = ");
    Serial.println(ldrval);
    Serial.print("ldr output = ");
    Serial.println(ldrout);
    Serial.print("counter  = ");
    Serial.println(count);
    if (ldrval < 3)
    { 
      if (count == 5)
    {
       digitalWrite(buzz, HIGH);
       delay(2000);
       digitalWrite(buzz, LOW);
    }
    else {
      count++; 
      for(angle = 0; angle <= 180; angle += 2)
      {
        myservo.write(angle);
        delay(20);
      }
      for(angle = 180; angle >= 0; angle -= 2)
      {
        myservo.write(angle);
        delay(20);
      }
    }
    }
    if (ldrout < 3)
    {
      count--; 
      for(angle = 0; angle <= 180; angle += 2)
      {
        myservo.write(angle);
        delay(20);
      }
      for(angle = 180; angle >= 0; angle -= 2)
      {
        myservo.write(angle);
        delay(20);
      }
    }
  }
}
