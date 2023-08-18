//#include "ponte_h.ino"
//define as variaveis
char cont = 'D';
void algorithm(){
    
   do
   {
      forward(55);    
   } while(stayOnBlackLine());
   stop();
   if (cont == 'D' && !stayOnBlackLine())
   {
      
   while (cont == 'D' && !stayOnBlackLine())
   {
      turnRightMiddleRobot(55);
      delay(700);
      stop();
      cont = 'L';
   }
   }
   
   if (cont == 'L' && !stayOnBlackLine())
   {
     while (cont == 'L' && !stayOnBlackLine())
     {
       turnLeftMiddleRobot(55);
      delay(700);
      stop();
      cont = 'D';
     }
     
   }
   stop();
   delay(1000);
}
