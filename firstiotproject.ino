#define BLYNK_TEMPLATE_ID "TMPL2Al-2Ljhu"
#define BLYNK_TEMPLATE_NAME "First IOT Project"
#define BLYNK_AUTH_TOKEN "0KFPMmcRZK38XCaLjQe7y6vWoc1dTJyP"

/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "";
char pass[] = "";

int ledPin = 5; // GPIO 5 (D1) is connected to the LED

BlynkTimer timer;



void setup()
{
  // Debug console
  Serial.begin(115200);

  pinMode(ledPin, OUTPUT);
  
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
  // You can also specify server:
  //Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass, "blynk.cloud", 80);
  //Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass, IPAddress(192,168,1,100), 8080);
}
void loop()
{
  Blynk.run();
  timer.run();
}
