
/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial // digunakan untuk monitor blynk di serial

#include <ESP8266WiFi.h> // file untuk modul wifi
#include <BlynkSimpleEsp8266.h> // file untuk blynk nya

char auth[] = "4o_B_l5gs8CSFFnkWTIeXRjBpwlIet-A"; // token yang dikirim dari blynk ke email masing masing

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "vivo 1724";
char pass[] = "20042004";

void setup()
{
  // Debug console
  Serial.begin(9600); // untuk monitor di serial print 

  Blynk.begin(auth, ssid, pass); // menjalankan blynk sesuai token, wifi, dan passwordnya
  // You can also specify server:
  //Blynk.begin(auth, ssid, pass, "blynk-cloud.com", 80);
  //Blynk.begin(auth, ssid, pass, IPAddress(192,168,1,100), 8080);
}

void loop()// fungsi utama dijalankan berulang kali
{
  Blynk.run(); // perintah untuk menjalankan blynk
}
