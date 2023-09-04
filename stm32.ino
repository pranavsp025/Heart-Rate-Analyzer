#include <SoftwareSerial.h>
SoftwareSerial espSerial(A5,A6);
const int sensorPin = A0;
const int threshold =550;
void setup()
{
Serial.begin(115200);
 espSerial.begin(115200);
 pinMode(A5,OUTPUT);
 pinMode(A6,OUTPUT);
 }
void loop()
{
 int count=0;
 for (int i=0;i<200;i++){
 int sensorValue = analogRead(sensorPin);
 if(sensorValue>threshold)
{
count++;
 }
 }
 int bp=(count/10*6);
 count=0;
38
 espSerial.println(bp);
}
