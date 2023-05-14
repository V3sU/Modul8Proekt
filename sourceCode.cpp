#define LDR_PIN A0

void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}

void loop() {
  int ldr_value = analogRead(LDR_PIN);
  Serial.println(ldr_value);
  int threshold = 600; // 80% of 1023
  if (ldr_value > threshold) {
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(13, LOW);
  }
  delay(1000);
}
