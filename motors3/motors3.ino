//motors3
/* This code will rotate one motor per press of each button. 
   Buttons are attached to pins 3, 1, 0 
   Button 2 is broken and therefore not used.
   Motor 1 was broken and is therefore not used
   */

//by JACOBDP

//HIGH MEANS OFF
//LOW MEANS ON

//Constants
const int sec = 1000;

//Button Pin Assignments
//const int button1 = 3;
const int button2 = 3;
const int button3 = 1;
const int button4 = 0;


//Motor Control Pin Assignments
//Motor 1
//const int motor1_forward = 13;
//const int motor1_reverse = 12;
//Motor2
const int motor2_forward = 11;
const int motor2_reverse = 10;
//Motor3
const int motor3_forward = 9;
const int motor3_reverse = 8;
//Motor4
const int motor4_forward = 7;
const int motor4_reverse = 6;


//Button State Initialization
//int buttonState1 = 0;
int buttonState2 = 0;
int buttonState3 = 0;
int buttonState4 = 0;


void setup() {
  //Serial.begin(9600);

  //Motor Control
  //pinMode(motor1_forward, OUTPUT);
  //pinMode(motor1_reverse, OUTPUT); 
  pinMode(motor2_forward, OUTPUT);
  pinMode(motor2_reverse, OUTPUT); 
  pinMode(motor3_forward, OUTPUT);
  pinMode(motor3_reverse, OUTPUT); 
  pinMode(motor4_forward, OUTPUT);
  pinMode(motor4_reverse, OUTPUT); 
  
  //Buttons
  //pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(button3, INPUT);
  pinMode(button4, INPUT);  
}

void loop() {
  
  //buttonState1 = digitalRead(button1);
  buttonState2 = digitalRead(button2);
  buttonState3 = digitalRead(button3);
  buttonState4 = digitalRead(button4);
  
  //BUTTON 1, MOTOR 1
  /*if (buttonState1 == LOW && buttonState2 == HIGH && buttonState3==HIGH && buttonState4==HIGH){
    
    //Rotate forward for 2 seconds
    digitalWrite(motor1_forward, LOW);
    delay(2*sec);
    digitalWrite(motor1_forward, HIGH);
    //Hold
    delay(2000);
    //Reverse for 2 seconds
    digitalWrite(motor1_reverse, LOW);
    delay(2000);
    digitalWrite(motor1_reverse, HIGH);
  }
    */
  //BUTTON 2, MOTOR 2
  if (buttonState2 == LOW& buttonState3==HIGH && buttonState4==HIGH){
    
    //Rotate forward for 2 seconds
    digitalWrite(motor2_forward, LOW);
    delay(2*sec);
    digitalWrite(motor2_forward, HIGH);
    //Hold
    delay(2000);
    //Reverse for 2 seconds
    digitalWrite(motor2_reverse, LOW);
    delay(2000);
    digitalWrite(motor2_reverse, HIGH);
  }
  
    //BUTTON 3, MOTOR 3
    else  if (buttonState2 == HIGH && buttonState3==LOW && buttonState4==HIGH){
    
    //Rotate forward for 2 seconds
    digitalWrite(motor3_forward, LOW);
    delay(2*sec);
    digitalWrite(motor3_forward, HIGH);
    //Hold
    delay(2000);
    //Reverse for 2 seconds
    digitalWrite(motor3_reverse, LOW);
    delay(2000);
    digitalWrite(motor3_reverse, HIGH);
  }
  
    //BUTTON 4, MOTOR 4
    else  if (buttonState2 == HIGH && buttonState3==HIGH && buttonState4==LOW){
    
    //Rotate forward for 2 seconds
    digitalWrite(motor4_forward, LOW);
    delay(2*sec);
    digitalWrite(motor4_forward, HIGH);
    //Hold
    delay(2000);
    //Reverse for 2 seconds
    digitalWrite(motor4_reverse, LOW);
    delay(2000);
    digitalWrite(motor4_reverse, HIGH);
  }
  
  
  
 else { //NO BUTTON PRESSED
  
   //FULL STOP
   //digitalWrite(motor1_forward, HIGH);
   //digitalWrite(motor1_reverse, HIGH); 
   digitalWrite(motor2_forward, HIGH);
   digitalWrite(motor2_reverse, HIGH); 
   digitalWrite(motor3_forward, HIGH);
   digitalWrite(motor3_reverse, HIGH); 
   digitalWrite(motor4_forward, HIGH);
   digitalWrite(motor4_reverse, HIGH); 
   
 } 
 
}
