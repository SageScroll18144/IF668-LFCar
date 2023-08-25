//define as variaveis
#include "sensor_IR.ino"
#include "distancia.ino"
#include "ponte_h.ino"
char cont = 'D';
void algorithm(){
   if (cont == 'D')
      {
         turnRight(55);
      } else if (cont == 'E')
      {
         turnLeft(55);
      }
   if (stayOnBlackLine())
   {
      delay(280);
      if (!stayOnBlackLine() && cont == 'D')
      {
         turnLeft(55);
         cont = 'E';
      } else if (!stayOnBlackLine() && cont == 'E')
      {
         turnRight(55);
         cont = 'D';
      }  
   }
   
   
  

  

}
