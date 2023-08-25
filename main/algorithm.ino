char cont = 'D';
void algorithm() {
         if (ultrassonicRead() < 14) {
            turnLeftMiddleRobot(55);
            delay(320);
            forward(55);
            delay(800);
            turnRightMiddleRobot(55);
            delay(700);
            do
            {
               forward(55);
               delay(50);
            } while (!stayOnBlackLine());
         }
        if (cont == 'D') {
                turnRight(55);
        } else if (cont == 'E') {
                turnLeft(55);
        }
        if (stayOnBlackLine()) {
                delay(225);
                if (!stayOnBlackLine() && cont == 'D') {
                        turnLeft(55);
                        cont = 'E';
                } else if (!stayOnBlackLine() && cont == 'E') {
                        turnRight(55);
                        cont = 'D';
                }
        }

}