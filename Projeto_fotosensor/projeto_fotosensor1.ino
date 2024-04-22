// C++ code
//
int luminosidade =0;
void setup()
{
  pinMode(A0, input);
  Serial.begin(9600);
  pinMode(9,OUTPUT);
}

void loop()
{
  luminosidade = analogRead(A0);
  Seria.println(luminosidade);
  if (luminosidade >=336){
  digitalWrite(9,LOW);
} else{
  digitalWrite(9, HIGH);
}
  delay(1000);
}