void debug(){
  /*if(stayOnBlackLine()){
    setVelocity(L, 60);
    setVelocity(R, 80);
    turnLeft();
  }else{
    setVelocity(L, 60);
    setVelocity(R, 80);
    turnRight();
  }*/
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
  setVelocity(L, 60);
  setVelocity(R, 80);
  turnRight();
  // periodRight = calcular o tempo que o carrinho leva para dar uma volta completa em torno do própio eixo (pela direita)
  spinTimeRight = (Angle_rad * periodRight) / PI;
  delay(spinTimeRight);
  stop();
  setVelocity(L, 60);
  setVelocity(R, 80);
  forward();
  //uma vez que o angulo de desvio em spinTimeLeft é igual ao angulo da trajetoria com a linha preta(considerando o obstaculo em um trajeto sem curvas), usamos novamente para retornar a linha
  delay(forwardTime);
  stop();
  setVelocity(L, 60);
  setVelocity(R, 80);
  turnLeft();
  delay(spinTimeLeft);
  stop();
 }
} 
