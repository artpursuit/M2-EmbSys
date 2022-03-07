#define LEFT_SENSOR A0  //left sensor
#define RIGHT_SENSOR A1 //right sensor

#define LEFT_MOTOR_1 A2 //left motor
#define LEFT_MOTOR_2 A3  
#define RIGHT_MOTOR_1 A4 //right motor
#define RIGHT_MOTOR_2 A5

void setup() {
  // put your setup code here, to run once:
{
 pinMode(LEFT_SENSOR,INPUT);
 pinMode(RIGHT_SENSOR,INPUT);
 pinMode(LEFT_MOTOR_1,OUTPUT);
 pinMode(LEFT_MOTOR_2,OUTPUT);
 pinMode(RIGHT_MOTOR_1,OUTPUT);
 pinMode(RIGHT_MOTOR_2,OUTPUT);
}
}

void loop()
{
  // put your main code here, to run repeatedly:
 if(digitalRead(LEFT_SENSOR)&& digitalRead(RIGHT_SENSOR))
{
 digitalWrite(LEFT_MOTOR_1,HIGH);
 digitalWrite(LEFT_MOTOR_2,LOW);
 digitalWrite(RIGHT_MOTOR_1,HIGH);
 digitalWrite(RIGHT_MOTOR_2,LOW);
}
 if(!(digitalRead(LEFT_SENSOR))&& digitalRead(RIGHT_SENSOR))
{
 digitalWrite(LEFT_MOTOR_1,LOW);
 digitalWrite(LEFT_MOTOR_2,HIGH);
 digitalWrite(RIGHT_MOTOR_1,LOW);
 digitalWrite(RIGHT_MOTOR_2,LOW);
}
if(digitalRead(LEFT_SENSOR)&&!(digitalRead(RIGHT_SENSOR)))
{
  digitalWrite(LEFT_MOTOR_1,HIGH);
  digitalWrite(LEFT_MOTOR_2,LOW);
  digitalWrite(RIGHT_MOTOR_1,LOW);
  digitalWrite(RIGHT_MOTOR_2,LOW);
}
if(!(digitalRead(LEFT_SENSOR))&&!(digitalRead(RIGHT_SENSOR)))
{
  digitalWrite(LEFT_MOTOR_1,LOW);
  digitalWrite(LEFT_MOTOR_2,LOW);
  digitalWrite(RIGHT_MOTOR_1,LOW);
  digitalWrite(RIGHT_MOTOR_2,LOW);
}
 
}
