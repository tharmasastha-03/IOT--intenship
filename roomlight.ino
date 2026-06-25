#define PIRPIN  A0
#define IRPIN   A1
#define LEDPIN  A2

void setup()
{
  Serial.begin(115200);

  pinMode(PIRPIN, INPUT);
  pinMode(IRPIN, INPUT);
  pinMode(LEDPIN, OUTPUT);
}

void loop()
{
  int l = digitalRead(PIRPIN);
  int b = digitalRead(IRPIN);

  Serial.print("PIR = ");
  Serial.print(l);
  Serial.print("  IR = ");
  Serial.println(b);

  if (l == 1 || b == 0)   // PIR detected OR IR detected
  {
    digitalWrite(LEDPIN, HIGH);
  }
  else
  {
    digitalWrite(LEDPIN, LOW);
  }

  delay(1000);
}