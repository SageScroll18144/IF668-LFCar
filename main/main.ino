#define L 0
#define R 1

const int pinos_ph[] = {6, 7, 5, 4};
const int pinos_v[] = {9, 3};
const int ultrassonic_echo = 10;
const int ultrassonic_trig = 8;
const int sensor_ir = 2;
int distanciaSegura = 5;

void setup() {
  for(int i=0;i<sizeof(pinos_ph)/sizeof(int);i++) pinMode(pinos_ph[i], OUTPUT);
  setVelocity(0, 255);
  setVelocity(1, 255);
  Serial.begin(9600);//FOR DEBUG
}

void loop() {
  debug();
  //algorithm();
}
