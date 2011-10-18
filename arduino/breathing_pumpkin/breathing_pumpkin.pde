// http://www.tmatthew.net/blog/breathing_led

int ledPin = 9;
int x = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int outVal = yforx(x);
  analogWrite(ledPin, outVal);
  delay(18);
  x++;
}

int yforx(int x) {
  return (-250*abs(sin(x*0.01)))+255; //sine wave
}
