int pressurePin = 0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int pressure = analogRead(pressurePin);
Serial.println(pressure);
delay(100);
}
