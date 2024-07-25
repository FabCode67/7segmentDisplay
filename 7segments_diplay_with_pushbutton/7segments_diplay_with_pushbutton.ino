void setup()
{
  for (int pin = 2; pin <= 8; pin++) {
    pinMode(pin, OUTPUT);
  }
  pinMode(9, INPUT_PULLUP);
  Serial.begin(9600);
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
  int i = 0;
  while(i<10 ){
      Serial.println(i);
      for (int j = 0; j < 7; j++) {
      digitalWrite(j + 2, numbers[i][j]);
    }
    if(digitalRead(9) == LOW){
      delay(500);
      i++;
    }
  }
}