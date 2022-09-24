double obstWidth, obstLength; //em centímetros
double tgAngle, Angle_rad, Angle_degree; 
double spinTimeLeft, periodLeft, forwardTime,spinTimeRight, periodRight;
double speed;
#define PI 3.14159

void algorithm(){
 if(ultrassonicRead() <= distanciaSegura){
  //desvio
  stop();
  tgAngle = obstWidth / ultrassonicRead();
  Angle_rad = atan(tgAngle);
  Angle_degree = (Angle_rad * 180) / PI; 
  turnLeft(30);
  // periodLeft = calcular o tempo que o carrinho leva para dar uma volta completa em torno do própio eixo (pela esquerda)
  spinTimeLeft = (Angle_rad * periodLeft) / (2 * PI);
  delay(spinTimeLeft);
  stop();
  forward(60);
  distanciaPercorrida = ((obstLength/2) + distanciaSegura) / cos(Angle_degree);
  // speed = calcular a velocidade em linha reta do carro em cm/s
  forwardTime = distanciaPercorrida / speed;
  delay(forwardTime);
  stop();
  // periodRight = calcular o tempo que o carrinho leva para dar uma volta completa em torno do própio eixo (pela direita)
  spinTimeRight = (Angle_rad * periodRight) / PI;
  delay(spinTimeRight);
  stop();
  forward(60);
 }else{
    setVelocity(L, 60);
    setVelocity(R, 80);
    if(stayOnBlackLine()){
      turnLeft();
    }else{
      turnRight();
    }
 }
}
