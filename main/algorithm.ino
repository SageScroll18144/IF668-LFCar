#include "sensor_IR.ino"
#include "distancia.ino"
#include "ponte_h.ino"

char cont = 'D';

void algorithm(){
  if (cont == 'D'){ turnRight(55); }
  else if (cont == 'E'){ turnLeft(55); }

  if (ultrassonicRead() < 10){
    stop();
    delay(1000);
    turnLeftMiddleRobot(55);
    delay(1000);
    stop();
    clockwiseCircle(55);
  }

  if (stayOnBlackLine()){
    delay(225);
    if (!stayOnBlackLine() && cont == 'D'){
      turnLeft(55);
      cont = 'E';
    }
    else if (!stayOnBlackLine() && cont == 'E'){
      turnRight(55);
      cont = 'D';
    }
  }
}