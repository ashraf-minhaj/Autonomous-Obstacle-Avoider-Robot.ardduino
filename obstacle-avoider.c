/*Code by Ashraf Minhaj. watch www.youtube.com/c/fusebatti */

const int trigpin=8; //sonar sensor trigpin
const int echopin=7; //sonar echopin
const int out1=2;   //output to 1st motor
const int out2=3;   //output to 1st motor
const int out3=4;   //output to 2nd motor
const int out4=5;   //output to 2nd motor
void setup()
{
pinMode(trigpin,OUTPUT);
pinMode(echopin,INPUT);
pinMode(out1,OUTPUT);
pinMode(out2,OUTPUT);
pinMode(out3,OUTPUT);
pinMode(out4,OUTPUT);
}
void loop()
{
int time,distance;
digitalWrite(trigpin,HIGH);
delayMicroseconds(10);
digitalWrite(trigpin,LOW);
time=pulseIn(echopin,HIGH);
distance=(time*.034)/2;        //s=vt
if (distance<=50)
{
    digitalWrite(out2,HIGH);
    digitalWrite(out1,LOW);
    digitalWrite(out3,HIGH);
    
}
else
{
    digitalWrite(out1,HIGH);
    digitalWrite(out2,LOW);
    digitalWrite(out3,HIGH);
    
}
