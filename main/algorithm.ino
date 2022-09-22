void algorithm(){
 if(ultrassonicRead() <= distancia_seguranca){
  //desvio 
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
