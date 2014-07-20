int BTReset = 3;
int LED = 13;
char inByte = 0;
 
void setup() {
  digitalWrite(BTReset, LOW);
  delay(100);
  digitalWrite(BTReset, HIGH);
  delay(500);
   
  Serial.begin(115200);
 
  pinMode(LED, OUTPUT);
}
 
void loop() {
  if (Serial.available() > 0) {
    inByte = Serial.read();
    if (inByte == '0') {
      digitalWrite(LED, LOW);
    } else {
      digitalWrite(LED, HIGH);
    }
    Serial.println(inByte);
    delay(100);
  }
  delay(1);
}
