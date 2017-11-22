// initialize LED output pins
int LED1 = 13;
int LED2 = 12;
int LED3 = 11; 
int LED4 = 10;
int LED5 = 9;
int LED6 = 8;
int LED7 = 7;
int LED8 = 6;
int LED9 = 5;
int LED10 = 4;
int LED11 = 3;
int LED12 = 2;

//initalize button input pins
int buttonPin1 = A0;
int buttonPin2 = A1;
int buttonPin3 = A2;
int buttonPin4 = A3;

int LEDstate1 = LOW;
int LEDstate2 = LOW;
int LEDstate3 = LOW;
int LEDstate4 = LOW;
int LEDstate5 = LOW;
int LEDstate6 = LOW;
int LEDstate7 = LOW;
int LEDstate8 = LOW;
int LEDstate9 = LOW;
int LEDstate10 = LOW;
int LEDstate11 = LOW;
int LEDstate12 = LOW;

int oldLED1 = HIGH;
int oldLED2 = HIGH;
int oldLED3 = HIGH;
int oldLED4 = HIGH;
int oldLED5 = HIGH;
int oldLED6 = HIGH;
int oldLED7 = HIGH;
int oldLED8 = HIGH;
int oldLED9 = HIGH;
int oldLED10 = HIGH;
int oldLED11 = HIGH;
int oldLED12 = HIGH;

void setup() {
  // put your setup code here, to run once:
pinMode(LED1,OUTPUT);
pinMode(LED2,OUTPUT);
pinMode(LED3,OUTPUT);
pinMode(LED4,OUTPUT);
pinMode(LED5,OUTPUT);
pinMode(LED6,OUTPUT);
pinMode(LED7,OUTPUT);
pinMode(LED8,OUTPUT);
pinMode(LED9,OUTPUT);
pinMode(LED10,OUTPUT);
pinMode(LED11,OUTPUT);
pinMode(LED12,OUTPUT);

pinMode(buttonPin1,INPUT);
pinMode(buttonPin2,INPUT);
pinMode(buttonPin3,INPUT);
pinMode(buttonPin4,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int button1 = analogRead(buttonPin1);
if (button1 > 450 && button1 < 550){
  LEDstate1 = !LEDstate1;
  digitalWrite(LED1, LEDstate1);
  delay(200);
  oldLED1 = LEDstate1;
  }
if (button1 > 650 && button1 < 750){
  LEDstate2 = !LEDstate2;
  digitalWrite(LED2, LEDstate2);
  delay(200);
  oldLED2 = LEDstate2;  
}
if (button1 > 950){
  LEDstate3 = !LEDstate3;
  digitalWrite(LED3, LEDstate3);
  delay(200);
  oldLED3 = LEDstate3;  
}
int button2 = analogRead(buttonPin2);
if (button2 > 450 && button2 < 550){
  LEDstate4 = !LEDstate4;
  digitalWrite(LED4, LEDstate4);
  delay(200);
  oldLED4 = LEDstate4;
  }
if (button2 > 650 && button2 < 750){
  LEDstate5 = !LEDstate5;
  digitalWrite(LED5, LEDstate5);
  delay(200);
  oldLED5 = LEDstate5;  
}
if (button2 > 950){
  LEDstate6 = !LEDstate6;
  digitalWrite(LED6, LEDstate6);
  delay(200);
  oldLED6 = LEDstate6;  
}

}
