int water;

void setup() {
  Serial.begin(9600);

  pinMode(3, OUTPUT);
  pinMode(6, INPUT);

  Serial.println("IRRIGATION SYSTEM IS ON");
}

void loop() {

  water = digitalRead(6);

  if (water == LOW) {      // Molhado
    digitalWrite(3, HIGH); // Desliga relé

    Serial.println("WET");
    Serial.println("Water Pump: OFF");
  }
  else {                   // Seco
    digitalWrite(3, LOW);  // Liga relé

    Serial.println("DRY");
    Serial.println("Water Pump: ON");
  }

  Serial.println("----------------");
  delay(500);
}