#include <DHT.h>

// Define the type of DHT sensor (DHT11 or DHT22)
#define DHTPIN A0   // Digital pin connected to the DHT sensor
#define DHTTYPE DHT11   // DHT 11
int m=2;
int a=4;


// Initialize DHT sensor
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);
   pinMode(m, INPUT);

    
  dht.begin();
}

void loop() {
  int a= analogRead(m);
  int moisturepercentage=map(a,0,1013,100,0);
  Serial.print("a:\n");
  Serial.print(moisturepercentage);
  Serial.print("%");
  delay(1000);

  delay(2000);  // Wait for 2 seconds between measurements

  // Reading temperature or humidity takes about 250 milliseconds!
  float humidity = dht.readHumidity();    // Read humidity
  float temperature = dht.readTemperature();  // Read temperature in Celsius (the default)

  // Check if any reads failed and exit early (to try again).
  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  // Print humidity and temperature to Serial Monitor
  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.print("%\t");
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println("°C");
}
