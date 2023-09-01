//retorno em cm(long) a o sensor ultrasonico
long ultrassonicRead(){
  unsigned long duracao;
  unsigned long distancia;
  digitalWrite(ultrassonic_trig, LOW);
  delayMicroseconds(2);
  digitalWrite(ultrassonic_trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(ultrassonic_trig, LOW);
  // Basicamente monitora a porta indicada como primeiro parametro no estado indicado como segundo
  // Ela vai retornar o tempo que a porta ficou no estado HIGH em milisegundos
  duracao = pulseIn(ultrassonic_echo, HIGH);
  distancia = duracao/58;
  return distancia;
} 
