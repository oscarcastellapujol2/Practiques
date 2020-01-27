
int i;                                      // variable
int leds [8] = {5, 6, 7, 8, 9, 10, 11, 12};
const int marxa = A2;
const int entrada = A0;
const int sortida = A1;
const int t = 1000;

void setup()
{
  for (i = 0; i < 8; i++)
  {
    pinMode (leds[i], OUTPUT); // definir els pins com a sortides
  }
  pinMode (marxa, INPUT);
  pinMode (entrada, INPUT);
  pinMode (sortida, OUTPUT);
}

void loop()
{
  if (digitalRead ( marxa) == HIGH || digitalRead (entrada) == HIGH)

  {
    for (i = 0; i < 8; i++)
    {
      digitalWrite (leds[i], HIGH);
      delay (t);
      digitalWrite (leds[i], LOW);
    }
    digitalWrite(sortida, HIGH);
    delay(t);
    digitalWrite(sortida, LOW);
  }


}
