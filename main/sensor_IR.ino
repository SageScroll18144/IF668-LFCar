// Retorna booleano apenas se esta(true) ou nao(flase) na linha preta
bool stayOnBlackLine(){
  return !digitalRead(sensor_ir);
}
