void setMode(int motor, char sense){
  if(sense == 'F'){
    digitalWrite(pinos_ph[(2*motor)], HIGH);
    digitalWrite(pinos_ph[(2*motor)+1], LOW);
  }else if(sense == 'B'){
    digitalWrite(pinos_ph[(2*motor)], LOW);
    digitalWrite(pinos_ph[(2*motor)+1], HIGH);
  }else if(sense == 'S'){
    digitalWrite(pinos_ph[(2*motor)], LOW);
    digitalWrite(pinos_ph[(2*motor)+1], LOW);
  }else{
    Serial.println("*sense was incorrect value!*");
  }
}
void forward(){
  setMode(0, 'F');
  setMode(1, 'F');
}
void backward(){
  setMode(0, 'B');
  setMode(1, 'B');
}
void stop(){
  setMode(0, 'S');
  setMode(1, 'S');
}
void turnLeft(){
  setMode(0, 'F');
  setMode(1, 'B');
}
void turnRight(){
  setMode(0, 'B');
  setMode(1, 'F');
}
