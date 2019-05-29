void setup() {
  // put your setup code here, to run once:
  pinMode(D0, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = analogRead(A0);
  analogWrite(D0, val);
  Serial.println(val);
}
