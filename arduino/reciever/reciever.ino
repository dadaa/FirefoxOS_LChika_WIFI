int LED = 13; 
void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop() {  
  if (Serial.available() > 0) {
    int key = Serial.read();
    if (key == '0') {
      digitalWrite(LED, LOW);
    } else {
      digitalWrite(LED, HIGH);
    }
    Serial.print(key);
  }
}
