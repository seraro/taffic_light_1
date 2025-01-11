// C++ code
//
// C++ code
//
int counter;

void setup()
{
  pinMode(2, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(0, OUTPUT);
}

void loop()
{
  digitalWrite(2, HIGH);
  digitalWrite(1, LOW);
  digitalWrite(0, LOW);
  delay(5000); // Wait for 5000 millisecond(s)
  for (counter = 0; counter < 3; ++counter) {
    digitalWrite(2, LOW);
    digitalWrite(1, HIGH);
    digitalWrite(0, LOW);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(2, LOW);
    digitalWrite(1, LOW);
    digitalWrite(0, LOW);
    delay(1000); // Wait for 1000 millisecond(s)
  }
  digitalWrite(2, LOW);
  digitalWrite(1, LOW);
  digitalWrite(0, HIGH);
  delay(5000); // Wait for 5000 millisecond(s)
}