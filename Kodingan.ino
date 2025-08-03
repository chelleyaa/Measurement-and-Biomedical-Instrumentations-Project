const int pinEMG = A0;

int nilaiEMG;

void setup() {
  pinMode(pinEMG, INPUT);
  Serial.begin(9600);
}

void loop() {
  nilaiEMG = analogRead(pinEMG);
  Serial.println(nilaiEMG);
  delay(100);
}