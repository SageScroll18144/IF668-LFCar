double obstWidth = 7, obstLength = 7; //em centímetros
double tgAngle, Angle_rad, Angle_degree; 
double spinTimeLeft, periodLeft = 2000, forwardTime,spinTimeRight, periodRight = 2000;
double speed = 27.5;
int distanciaPercorrida;

void algorithm(){
 const int timeToTurnLeft = 250;
 const int timeToTurn90Right = 900;
 const int timeToGoForward = 1750; 
  if((ultrassonicRead() <= distancia_segura) && flag == 1){
   while(1){
     setVelocity(L, 255);
    setVelocity(R, 255);
    turnLeftMiddleRobot();
    play_music();
    digitalWrite(20, HIGH);
     digitalWrite(21, LOW);
    delay(400);
    digitalWrite(20, LOW);
    digitalWrite(21, HIGH);
    flag = 0;
   }
  }
  else if((ultrassonicRead() <= distancia_segura) && flag == 0){
        digitalWrite(20, HIGH);
        stop();
        delay(500);
        //vira 90 graus para a esquerda
        setVelocity(L, 60);
        setVelocity(R, 66);
        turnLeftMiddleRobot();
        delay(timeToTurnLeft);
        stop();
        //anda durante 5 segundos para a frente
        setVelocity(L, 50);
        setVelocity(R, 55);
        forward();
        delay(timeToGoForward);
        //vira 90 graus para a direita
        digitalWrite(20,LOW);
        stop();
        delay(1000);
        digitalWrite(21, HIGH);
        setVelocity(L, 62);
        setVelocity(R, 70);
        turnRight();
        delay(timeToTurn90Right);
        stop();
        //anda durante 5 segundos para a frente
        setVelocity(L, 50);
        setVelocity(R, 55);
        forward();
        //vira 90 graus para a direita
        while(!stayOnBlackLine());
        sen = 0; //Ajeita o valor do sentido (o desvio é feito pra esquerda)
        digitalWrite(20,LOW);
        digitalWrite(21, LOW);
        flag = 1;
    }
  else{
    setVelocity(L, 60);//mudanca
    setVelocity(R, 60);
    if(stayOnBlackLine()) {
      while(stayOnBlackLine());
      sen = !sen;
    }
    if(sen) turnLeft();
    else turnRight();
  }
}
