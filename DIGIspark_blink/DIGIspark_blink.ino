//09.04.2019 
//Ардуинщик
void setup()
{
  //Устонавливаем 1 и 0 пин
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
}
void loop()
{
  //Включаем светодиод
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  //Ждём 1000 милисекунд-1 секунду
  delay(1000);
  //Выключаем светодиод
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  //Ждём 1 секунду
  delay(1000);
}
