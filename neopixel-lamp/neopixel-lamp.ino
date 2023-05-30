#include <Servo.h>
Servo myservo1;
Servo myservo2;

int trig = 9;
int echo = 10;
long tiempo;
int distancia;


void setup() {

   myservo1.attach(2);
    myservo2.attach(3);
  
pinMode(trig, OUTPUT); 
pinMode(echo, INPUT); 
Serial.begin(9600); 

}


void loop() {



digitalWrite(trig, LOW);
delayMicroseconds(2);
digitalWrite(trig, HIGH);
delayMicroseconds(10);
digitalWrite(trig, LOW);
tiempo = pulseIn(echo, HIGH);
distancia= tiempo*0.034/2;
Serial.print("distancia: ");
Serial.println(distancia);

if (distancia>=1 && distancia<=5) 
{ 
  myservo1.write(180);
  myservo2.write(0);
  delay(100);
  myservo1.write(0);
  myservo2.write(180);
  delay(100);
}

if (distancia>=6 && distancia<=10) 
{   
     myservo1.write(180);
  myservo2.write(0);
  delay(100);
  myservo1.write(0);
  myservo2.write(180);
  delay(100);
 
}

if (distancia>=11 && distancia<=20) 
{   

   myservo1.write(180);
  myservo2.write(0);
  delay(100);
  myservo1.write(0);
  myservo2.write(180);
  delay(300);
   
 
}

if (distancia>=21 && distancia<=30) 
{ 
      myservo1.write(180);
  myservo2.write(0);
  delay(100);
  myservo1.write(0);
  myservo2.write(180);
  delay(500);
 
}

if (distancia>=31 && distancia<=40) 
{   

 myservo1.write(180);
  myservo2.write(0);
  delay(100);
  myservo1.write(0);
  myservo2.write(180);
  delay(700);
 
}

if (distancia>=41 && distancia<=50) 
{   
 myservo1.write(180);
  myservo2.write(0);
  delay(100);
  myservo1.write(0);
  myservo2.write(180);
  delay(1000);
 
}}

 
 
