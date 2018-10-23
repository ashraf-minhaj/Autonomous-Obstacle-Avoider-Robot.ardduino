/* Obstacle Avoider Robot*
 * Code by Ashraf Minhaj. 
 * watch www.youtube.com/c/fusebatti
 * Contact at ashraf_minhaj@yahoo.com
 */

const int trigpin=8; //sonar sensor trigpin
const int echopin=7; //sonar echopin
const int out1=2;   //output to 1st motor
const int out2=3;   //output to 1st motor
const int out3=4;   //output to 2nd motor
const int out4=5;   //output to 2nd motor
void setup()
{
pinMode(trigpin,OUTPUT);  //set trigger pin as Output
pinMode(echopin,INPUT);   //Echopin as Input
    
pinMode(out1,OUTPUT);     //motor1 pin as Output
pinMode(out2,OUTPUT);     //motor1 pin as Output 
    
pinMode(out3,OUTPUT);     //motor2 pin as Output
pinMode(out4,OUTPUT);     //motor2 pin as Output
}

void loop()
{
int time,distance;    //declare time and distance variable
digitalWrite(trigpin,HIGH);
delayMicroseconds(10);
digitalWrite(trigpin,LOW);
time=pulseIn(echopin,HIGH);
    
distance=(time*.034)/2;        //s=vt  to get the distance

/*condition checking part*/
if (distance<=50)          //distance less than 50cm - turn robot
{
    digitalWrite(out2,HIGH);  
    digitalWrite(out1,LOW);
    digitalWrite(out3,HIGH);
    
}
    
else                   //else go forward
{
    digitalWrite(out1,HIGH);
    digitalWrite(out2,LOW);
    digitalWrite(out3,HIGH);
    
}
