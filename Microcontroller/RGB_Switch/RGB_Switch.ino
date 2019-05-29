void setup() {
  // put your setup code here, to run once:
  pinMode(D0, INPUT);
  pinMode(D1, INPUT);
  pinMode(D2, INPUT);

  pinMode(D5, OUTPUT);
  pinMode(D6, OUTPUT);
  pinMode(D7, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(D5, LOW);
  digitalWrite(D6, LOW);
  digitalWrite(D7, LOW);
  if (digitalRead(D0)){
    digitalWrite(D5, HIGH);
   }
  else if (digitalRead(D1)){
    digitalWrite(D6, HIGH);
  }
  else if (digitalRead(D2)){
    digitalWrite(D7, HIGH);
  }
}
