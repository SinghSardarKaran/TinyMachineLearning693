#define RED 22
void setup() {
  // put your setup code here, to run once:
pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly
float insideL, outsideL;
  
  for (insideL = 1.570; insideL < 7.853; insideL= insideL + 0.001)
  {
    outsideL = sin(insideL) * 127.5 + 127.5;
    analogWrite(RED,outsideL);
  }
}
