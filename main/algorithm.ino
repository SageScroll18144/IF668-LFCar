double obstWidth = 7, obstLength = 7; //em centímetros
double tgAngle, Angle_rad, Angle_degree; 
double spinTimeLeft, periodLeft = 2000, forwardTime,spinTimeRight, periodRight = 2000;
double speed = 27.5;
int distanciaPercorrida;

void algorithm(){
 if((ultrassonicRead() <= distancia_segura) && (ultrassonicRead() >= 5)){
  //digitalWrite(LED, HIGH);
  //desvio
  stop();
  tgAngle = obstWidth / ultrassonicRead();
  Angle_rad = atan(tgAngle);
  Angle_degree = (Angle_rad * 180) / PI; 
  setVelocity(L, 60);
  setVelocity(R, 60);
  turnLeft();
  // periodLeft = calcular o tempo que o carrinho leva para dar uma volta completa em torno do própio eixo (pela esquerda)
  spinTimeLeft = (Angle_rad * periodLeft) / (2 * PI);
  delay(spinTimeLeft);
  stop();
  setVelocity(L, 60);
  setVelocity(R, 60);
  forward();
  distanciaPercorrida = ((obstLength/2) + distancia_segura) / cos(Angle_degree);
  // speed0 = calcular a velocidade em linha reta do carro em cm/s
  forwardTime = distanciaPercorrida / speed;
  delay(forwardTime);
  stop();
  // periodRight = calcular o tempo que o carrinho leva para dar uma volta completa em torno do própio eixo (pela direita)
  spinTimeRight = (Angle_rad * periodRight) / PI;
  delay(spinTimeRight);
  stop();
  setVelocity(L, 60);
  setVelocity(R, 60);
  forward();
 }else{
    //digitalWrite(LED, LOW);
    setVelocity(L, 60);
    setVelocity(R, 60);
    if(!stayOnBlackLine()) {
      while(!stayOnBlackLine());
      sen = !sen;
    }
    if(sen) turnLeft();
    else turnRight();

 }
}
