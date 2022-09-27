double obstWidth, obstLength; //em centímetros
double tgAngle, Angle_rad, Angle_degree; 
double spinTimeLeft, periodLeft, forwardTime,spinTimeRight, periodRight;
double speed;
int distanciaPercorrida;

void algorithm(){
 if(ultrassonicRead() <= distancia_segura){
  //desvio
  stop();
  tgAngle = obstWidth / ultrassonicRead();
  Angle_rad = atan(tgAngle);
  Angle_degree = (Angle_rad * 180) / PI; 
  setVelocity(L, 60);
  setVelocity(R, 80);
  turnLeft();
  // periodLeft = calcular o tempo que o carrinho leva para dar uma volta completa em torno do própio eixo (pela esquerda)
  spinTimeLeft = (Angle_rad * periodLeft) / (2 * PI);
  delay(spinTimeLeft);
  stop();
  setVelocity(L, 60);
  setVelocity(R, 80);
  forward();
  distanciaPercorrida = ((obstLength/2) + distancia_segura) / cos(Angle_degree);
  // speed = calcular a velocidade em linha reta do carro em cm/s
  forwardTime = distanciaPercorrida / speed;
  delay(forwardTime);
  stop();
  // periodRight = calcular o tempo que o carrinho leva para dar uma volta completa em torno do própio eixo (pela direita)
  spinTimeRight = (Angle_rad * periodRight) / PI;
  delay(spinTimeRight);
  stop();
  setVelocity(L, 60);
  setVelocity(R, 80);
  forward();
 }else{
    setVelocity(L, 60);
    setVelocity(R, 80);
    if(stayOnBlackLine()==true){
      turnLeft();
    }else{
      turnRight();
    }
 }
}
