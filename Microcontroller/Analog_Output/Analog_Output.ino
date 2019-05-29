void setup() {
  // put your setup code here, to run once:
  pinMode(D0, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < 1000; i+= 50){
    analogWrite(D0, i);
    delay(100);
  }
}
