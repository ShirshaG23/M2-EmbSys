#include<LiquidCrystal.h>
# define echoPin 6
#define trigPin 7
#define trig1 7
#define echo1 6
int D7_pin = 8;
int D6_pin = 9;
int D5_pin = 10;
int D4_pin = 13;
int EN_pin = 11;
int RS_pin = 12;

LiquidCrystal lcd(RS_pin,EN_pin, D4_pin,D5_pin,D6_pin,D7_pin);

void setup() 
{
 pinMode(trig1, OUTPUT);
 pinMode(echo1, INPUT);
  pinMode(trigPin, OUTPUT);
 pinMode(echoPin, INPUT);
 Serial.begin(9600);

 lcd.begin(16,2);
 }

void loop() 
{
 long duration1, distance1;
 digitalWrite(trig1, LOW);
 delay(2);
 digitalWrite(trig1, HIGH);
 delay(10);
 digitalWrite(trig1, LOW);
 duration1 = pulseIn(echo1, LOW);
 distance1 = duration1*0.034/2;
 lcd.setCursor(0,0);
 lcd.print("Object is");
 if(distance1 >=10){
 lcd.setCursor(0,1);
 lcd.print("Far");
 delay(1000);
 }
 else if(distance1 <15){
 lcd.setCursor(0,1);
 lcd.print("Very Close");
 delay(1000);
  }
  Serial.print("The distance is :");
  Serial.print(distance1);
  Serial.println("cm");
  delay(1000);
  }
