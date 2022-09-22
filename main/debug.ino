void debug(){
  if(stayOnBlackLine()){
    setVelocity(L, 60);
    setVelocity(R, 80);
    turnLeft();
  }else{
    setVelocity(L, 60);
    setVelocity(R, 80);
    turnRight();
  }
} 
