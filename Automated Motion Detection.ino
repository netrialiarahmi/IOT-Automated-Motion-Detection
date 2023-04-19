int pirPin = 2; //pin untuk sensor gerak
int ledPin = 13; //pin untuk LED
int pirState = LOW; //variabel untuk menyimpan status sensor
int ledState = LOW; //variabel untuk menyimpan status LED
unsigned long previousMillis = 0; //variabel untuk menyimpan waktu terakhir gerakan terdeteksi
unsigned long interval = 3000; //interval waktu sebelum LED mati

void setup() {
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  int sensorValue = digitalRead(pirPin);
  if (sensorValue == HIGH) {
    pirState = HIGH;
    ledState = HIGH;
    previousMillis = millis();
  }

  if ((millis() - previousMillis) > interval) {
    ledState = LOW;
  }

  digitalWrite(ledPin, ledState);
  
  Serial.print("Sensor: ");
  Serial.println(pirState);
  Serial.print("LED: ");
  Serial.println(ledState);
  
  delay(500);
}
