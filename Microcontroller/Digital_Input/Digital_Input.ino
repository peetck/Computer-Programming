void setup() {
  // put your setup code here, to run once:
  pinMode(D0, OUTPUT);
  pinMode(D1, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(D1)){
    digitalWrite(D0, HIGH);
  }
  else{
    digitalWrite(D0, LOW);
  }
}
