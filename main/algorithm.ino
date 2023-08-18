//define as variaveis

void algorithm(){
    
   while(stayOnBlackLine())
   {
      forward(50);    
   }
   stop();
   Serial.println(ultrassonicRead());
  
   
}
