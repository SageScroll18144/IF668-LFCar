//retorno em cm
long ultrassonicRead(){
  unsigned long duracao;
  unsigned long distancia;
  digitalWrite(ultrassonic, LOW);
  delayMicroseconds(2);
  digitalWrite(ultrassonic, HIGH);
  delayMicroseconds(10);
  digitalWrite(ultrassonic, LOW);
  duracao = pulseIn(ultrassonic, HIGH);
  distancia = duracao/58;
  
  return distancia;
} 
