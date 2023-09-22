char cont = 'D';

void algorithm(){
  if (cont == 'D'){ turnRight(55); }
  else if (cont == 'E'){ turnLeft(55); }

  if (ultrassonicRead() < 15){
      digitalWrite(28, HIGH);

    stop();
    delay(1000);
    turnLeftMiddleRobot(55);
    delay(550);
    stop();
    //clockwiseCircle(70);
    forward(55); 
    delay(1500);
    turnRight(55);
    delay(950);
    forward(55); 
    cont = 'E'; 
    while(!stayOnBlackLine());
    digitalWrite(28, LOW);
    delay(100);
  }

  if (stayOnBlackLine()){
    while(stayOnBlackLine()){}
    delay(100);
    if (!stayOnBlackLine() && cont == 'D'){
      turnLeft(55);
      cont = 'E';
      digitalWrite(24, HIGH);
      digitalWrite(26, LOW);
    }
    else if (!stayOnBlackLine() && cont == 'E'){
      turnRight(55);
      cont = 'D';
      digitalWrite(24, LOW);
      digitalWrite(26, HIGH);
    }
  }

  //if (stayOnBlackLine()){ turnLeft(55); digitalWrite(24, HIGH); digitalWrite(26, LOW); delay(100);}
  //else { turnRight(55); digitalWrite(24, LOW); digitalWrite(26, HIGH); }
}