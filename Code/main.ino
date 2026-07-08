/*
 * Project: Laser Security Alarm System
 * Author: Pooja Saraswat & Team
 * Description: Perimeter security system using a Laser Pointer and an LDR sensor.
 */

const int LDR_PIN = A0;      
const int LED_PIN = 13;      
const int BUZZER_PIN = 12;   
const int LIGHT_THRESHOLD = 500; 

void setup() {
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);
  digitalWrite(BUZZER_PIN, LOW);
}

void loop() {
  int ldrValue = analogRead(LDR_PIN);
  Serial.print("LDR Value: ");
  Serial.println(ldrValue);
  
  if (ldrValue < LIGHT_THRESHOLD) {
    digitalWrite(LED_PIN, HIGH);   
    digitalWrite(BUZZER_PIN, HIGH); 
    Serial.println("⚠️ INTRUSION DETECTED! ⚠️");
    delay(2000); 
  } else {
    digitalWrite(LED_PIN, LOW);
    digitalWrite(BUZZER_PIN, LOW);
  }
  delay(100); 
}
