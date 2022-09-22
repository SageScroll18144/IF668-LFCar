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
void setVelocity(int motor, int speed){
  analogWrite(pinos_v[motor], speed);
}
void forward(){
  setMode(0, 'F');
  setMode(1, 'F');
}
void forward(int speed){
  setMode(0, 'F');
  setMode(1, 'F');
  setVelocity(0, speed);
  setVelocity(1, speed);
}
void backward(){
  setMode(0, 'B');
  setMode(1, 'B');
}
void backward(int speed){
  setMode(0, 'B');
  setMode(1, 'B');
  setVelocity(0, speed);
  setVelocity(1, speed);
}
void stop(){
  setMode(0, 'S');
  setMode(1, 'S');
}
void turnRight(){
  setMode(0, 'F');
  setMode(1, 'S');
}
void turnRight(int speed){
  setMode(0, 'F');
  setMode(1, 'S');
  setVelocity(0, speed);
  setVelocity(1, speed);
}
void turnLeft(){
  setMode(0, 'S');
  setMode(1, 'F');
}
void turnLeft(int speed){
  setMode(0, 'S');
  setMode(1, 'F');
  setVelocity(0, speed);
  setVelocity(1, speed);
}
