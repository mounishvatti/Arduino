void setup() {
  pinMode(motorPin,OUTPUT);

}

void loop() {
  // Accelerating the motor from 0->255
  for (int i=0;i<=255;i++)
  {
    analogWrite(motorPin,i);
    delay(10);
    }

    // hold at top speed
    delay(500);

    //decrease speed from 255->0
    for (int i=255;i>=0;i--)
    {
      analogWrite(motorPin,i);
      delay(10);
      }

      //hold at zero
      delay(500);

}
