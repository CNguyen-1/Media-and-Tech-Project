int sensorVal;
const int ledPin = 4;
const int sensorPin = 12;
const int buzzerPin = 8;


void setup(){
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(sensorPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
}


void loop(){
 
sensorVal = digitalRead(sensorPin);


if (sensorVal == HIGH){
  digitalWrite(ledPin, HIGH);
  tone(buzzerPin, 1000);

}

else {
  digitalWrite(ledPin, LOW);
  noTone(buzzerPin);
}
}


    
