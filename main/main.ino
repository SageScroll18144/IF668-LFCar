#define L 0
#define R 1

const int pinos_ph[] = {7, 6, 5, 4};
const int pinos_v[] = {9, 3};
const int ultrassonic_echo = 10;
const int ultrassonic_trig = 8;
const int sensor_ir = 2;
const int buzzer = 22;
int distancia_segura = 10;
bool sen = false;
int flag = 0;

void setup() {
  for(int i=0;i<sizeof(pinos_ph)/sizeof(int);i++) pinMode(pinos_ph[i], OUTPUT);
  setVelocity(0, 55);
  setVelocity(1, 55);
  pinMode(ultrassonic_echo, INPUT);
  pinMode(ultrassonic_trig, OUTPUT);
  pinMode(20, OUTPUT);
  pinMode(21,OUTPUT);
  Serial.begin(9600);//FOR DEBUG
}

void loop() {
  debug();
  //algorithm();
  //forward();
  //play_music();
}
