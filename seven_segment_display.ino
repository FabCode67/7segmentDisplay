void setup()
{
  for (int pin = 2; pin <= 8; pin++) {
    pinMode(pin, OUTPUT);
  }
}
void loop()
{
  int numbers[10][7] = {
    {LOW, LOW, LOW, LOW, LOW, LOW, HIGH}, 
    {HIGH, LOW, LOW, HIGH, HIGH, HIGH, HIGH}, 
    {LOW, LOW, HIGH, LOW, LOW, HIGH, LOW},
    {LOW, LOW, LOW, LOW, HIGH, HIGH, LOW}, 
    {HIGH, LOW, LOW, HIGH, HIGH, LOW, LOW}, 
    {LOW, HIGH, LOW, LOW, HIGH, LOW, LOW}, 
    {LOW, HIGH, LOW, LOW, LOW, LOW, LOW}, 
    {LOW, LOW, LOW, HIGH, HIGH, HIGH, HIGH},
    {LOW, LOW, LOW, LOW, LOW, LOW, LOW},
    {LOW, LOW, LOW, LOW, HIGH, LOW, LOW}
  };
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 7; j++) {
      digitalWrite(j + 2, numbers[i][j]);
    }
    delay(1000);
  }
}
