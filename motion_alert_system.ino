#define buzzer 11
#define motion 8

void setup()
{
  pinMode(motion, INPUT);
  pinMode(buzzer, OUTPUT);

  Serial.begin(9600);
}

void loop()
{
  int state = digitalRead(motion);

  if (state == HIGH)
  {
    digitalWrite(buzzer, HIGH);
    Serial.println("Motion Detected");
  }
  else
  {
    digitalWrite(buzzer, LOW);
    Serial.println("No Motion");
  }

  delay(200);
}