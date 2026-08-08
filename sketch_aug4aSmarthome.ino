
#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const int PIR_PIN = 9;
const int WATER_PIN = A1;
const int LED_PIN = 8;
#include <Servo.h>
Servo doorServo;
Servo door;
const int SERVO_PIN = 7;
int buzzer = 1;
#include <Wire.h>
int ldrPin = A5;
int ldrWert = 0;




void setup() {
  pinMode(PIR_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
  door.attach(7);
  doorServo.write(0);
  Serial.begin(9600);
  lcd.begin(16, 2);
  pinMode(buzzer,OUTPUT);

 lcd.setCursor(0, 0);



  //
  lcd.print("Welcome in my ");

  lcd.setCursor(0, 1);
  lcd.print("Smarthome");
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Your assistant");
  lcd.setCursor(0,1);
  lcd.print("booting up");
  delay(3000);

  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("10");
  delay(1000);
  lcd.setCursor(0,1);
  lcd.print("9");
  delay(1000);

  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("8");
  delay(1000);
  lcd.setCursor(0,1);
  lcd.print("7");
  delay(1000);

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("6");
  delay(1000);
  lcd.setCursor(0, 1);
  lcd.print("5");
  delay(1000);

  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("4");
  delay(1000);
  lcd.setCursor(0,1);
  lcd.print(3);
  delay(1000);

  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("2");
  delay(1000);
  lcd.setCursor(0,1);
  lcd.print("1");
  delay(2000);

  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("your smarthome");
  lcd.setCursor(0,1);
  lcd.print("is active");
  delay(5000);


}

void loop() {
  bool motion = digitalRead(PIR_PIN) == HIGH;
  int waterRaw = analogRead(WATER_PIN);
  int val;
  val=analogRead(0);
  Serial.print("Val=");
  Serial.println(val,DEC);

  if(val>500){ tone(buzzer, 1000);
  lcd.print("high temperature");
  delay(2000);
  lcd.clear();
 lcd.print("Advise");
 delay(2000);
 lcd.clear();
 lcd.print("turn on fan");
 delay(2000);
  }
  else {noTone(buzzer);
  
  }
  if(val>500){tone(buzzer, 1000);
  lcd.print("high temperature");
  delay(2000);
  lcd.clear();
 lcd.print("Advise");
 delay(2000);
 lcd.clear();
 lcd.print("turn on fan");
 delay(2000);}
  else if(val<470){
    lcd.print("Advise");
    delay(2000);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("friction");
    lcd.setCursor(0,1);
    lcd.print("=warm");
    delay(2000);
  }
  
  doorServo.write(0);
  delay(1000);
  doorServo.write(90);
  delay(1000);
  doorServo.write(180);
  delay(1000);


  ldrWert = analogRead(ldrPin);

  lcd.clear();

  if (ldrWert< 500  ) {
    lcd.setCursor(0,0);
    lcd.print("brighten");
    lcd.setCursor(0,1);
    lcd.print("lights");
    delay(3000);
  }
  else if(ldrWert>100) {
    lcd.setCursor(0,0);
    lcd.print("dimm");
    lcd.setCursor(0,1);
    lcd.print("lights");
    delay(3000);
  }
 

  
  if (motion) {
    
    digitalWrite(LED_PIN,HIGH);
    Serial.println("Motion detected");
    lcd.print("Motion detected");
    delay(1000);
    lcd.clear();
    delay(1000);
    lcd.print("open door");
    doorServo.write(180);
  delay(2000);
  doorServo.write(0);
  delay(2000);

  lcd.clear();

   
  }
  else {
  
    digitalWrite(LED_PIN,LOW);
    lcd.clear();
     lcd.print(val,DEC);
  delay(4000);
  lcd.clear();
  
    
    delay(500);
  }

  if (waterRaw > 500) {Serial.print("Water detected!!!!!");
  lcd.print("Water detected!!!!!");

  
  }
  delay(100);


  // put your main code here, to run repeatedly:
}
