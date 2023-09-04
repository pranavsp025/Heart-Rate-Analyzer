#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <SoftwareSerial.h>
char auth[] = "nil1wwUsr2sNPzXRqjY7L84TOy7YCZHY";
char ssid[] = "iPhone X";
char pass[] = "qwer1234";
const int RX = 13; // GPIO13 as RX
const int TX = 15; // GPIO15 as TX
SoftwareSerial mySerial(RX, TX);
void setup()
{
 Serial.begin(115200);
 mySerial.begin(115200);
 Blynk.begin(auth, ssid, pass);
}
void loop()
{
 Blynk.run();
 int bp = mySerial.parseInt();
 Blynk.virtualWrite(V0, bp);
 Serial.println(bp);
}
