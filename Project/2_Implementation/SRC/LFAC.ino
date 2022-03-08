#define LEFT_SENSOR A0  //left sensor 
#define RIGHT_SENSOR A1 //right sensor

#define LEFT_MOTOR_1 A2 //left motor front
#define LEFT_MOTOR_2 A3  //left motor back
#define RIGHT_MOTOR_1 A4 //right motor front
#define RIGHT_MOTOR_2 A5 //right motor back 

void setup() {

{
 pinMode(LEFT_SENSOR,INPUT); // To set A0 as Input
 pinMode(RIGHT_SENSOR,INPUT); // To set A1 as Input
 pinMode(LEFT_MOTOR_1,OUTPUT); // To set A2 as Output
 pinMode(LEFT_MOTOR_2,OUTPUT); // To set A3 as Output
 pinMode(RIGHT_MOTOR_1,OUTPUT); // To set A4 as Output
 pinMode(RIGHT_MOTOR_2,OUTPUT); // To set A5 as Output
}
}

void loop()
{

  
 if(digitalRead(LEFT_SENSOR)&& digitalRead(RIGHT_SENSOR)) // A0 and A1 = 1
{
 digitalWrite(LEFT_MOTOR_1,HIGH); //A2 = 1
 digitalWrite(LEFT_MOTOR_2,HIGH); //A3 = 1
 digitalWrite(RIGHT_MOTOR_1,HIGH); //A4 = 1
 digitalWrite(RIGHT_MOTOR_2,HIGH); //A5 = 1
}
 if(!(digitalRead(LEFT_SENSOR))&& digitalRead(RIGHT_SENSOR)) // A0 = 0 and A1 = 1
{
 digitalWrite(LEFT_MOTOR_1,HIGH); //A2 = 1
 digitalWrite(LEFT_MOTOR_2,HIGH); //A3 = 1
 digitalWrite(RIGHT_MOTOR_1,LOW); //A4 = 1
 digitalWrite(RIGHT_MOTOR_2,LOW); //A5 = 1
}
if(digitalRead(LEFT_SENSOR)&&!(digitalRead(RIGHT_SENSOR))) // A0 = 1 and A1 = 0
{
  digitalWrite(LEFT_MOTOR_1,LOW); //A2 = 0
  digitalWrite(LEFT_MOTOR_2,LOW); //A3 = 0
  digitalWrite(RIGHT_MOTOR_1,HIGH); //A4 = 1
  digitalWrite(RIGHT_MOTOR_2,HIGH); //A5 = 1
}
if(!(digitalRead(LEFT_SENSOR))&&!(digitalRead(RIGHT_SENSOR))) // A0 = 0 and A1 = 1
{
  digitalWrite(LEFT_MOTOR_1,LOW); //A2 = 0
  digitalWrite(LEFT_MOTOR_2,LOW); //A3 = 0
  digitalWrite(RIGHT_MOTOR_1,LOW); //A4 = 0
  digitalWrite(RIGHT_MOTOR_2,LOW); //A5 = 0
}
 
}
