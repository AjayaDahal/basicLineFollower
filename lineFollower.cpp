

/*Author: Ajaya Dahal
 * created on: 08/20/2018
*/


/*-------definning Inputs------*/
#define leftSensor 2      // left sensor
#define rightSensor 3      // right sensor

/*-------definning Outputs------*/
#define leftMotor 4       // left motor
#define leftMotor2 5       // left motor
#define rightMotor1 6       // right motor
#define rightMotor2 7       // right motor

void setup()
{
  pinMode(leftSensor, INPUT);
  pinMode(rightSensor, INPUT);
  pinMode(leftMotor, OUTPUT);
  pinMode(leftMotor2, OUTPUT);
  pinMode(rightMotor1, OUTPUT);
  pinMode(rightMotor2, OUTPUT);
}

void loop()
{
  if(digitalRead(leftSensor) && digitalRead(rightSensor))     // Move Forward
  {
    digitalWrite(leftMotor, HIGH);
    digitalWrite(leftMotor2, LOW);
    digitalWrite(rightMotor1, HIGH);
    digitalWrite(rightMotor2, LOW);
  }
  
  if(!(digitalRead(leftSensor)) && digitalRead(rightSensor))     // Turn right
  {
    digitalWrite(leftMotor, LOW);
    digitalWrite(leftMotor2, LOW);
    digitalWrite(rightMotor1, HIGH);
    digitalWrite(rightMotor2, LOW);
  }
  
  if(digitalRead(leftSensor) && !(digitalRead(rightSensor)))     // turn left
  {
    digitalWrite(leftMotor, HIGH);
    digitalWrite(leftMotor2, LOW);
    digitalWrite(rightMotor1, LOW);
    digitalWrite(rightMotor2, LOW);
  }
  
  if(!(digitalRead(leftSensor)) && !(digitalRead(rightSensor)))     // stop
  {
    digitalWrite(leftMotor, LOW);
    digitalWrite(leftMotor2, LOW);
    digitalWrite(rightMotor1, LOW);
    digitalWrite(rightMotor2, LOW);
  }
}
