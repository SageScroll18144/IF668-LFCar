#define L 0
#define R 1
// Pinos para definir o sentido dos motores(no esquema está como entradas)
const int pinos_ph[] = {6, 7, 5, 4};
// Pinos para ver a velocidade(no esquema esta como atv_a e atv_b, no caso as portas de baixo, pois as de cima sao 5v, para ligar eles direto na velocidade maxima)
const int pinos_v[] = {9, 3};
// Porta do ultra para mandar o sinal e a outra para receber a info
const int ultrassonic_echo = 10;
const int ultrassonic_trig = 8;
// Sensor optico aparentemente
const int sensor_ir = 2;
// Buzzer
const int buzzer = 22;

bool sen = false;
int flag = 0;

void setup() {
  for(int i=0;i<sizeof(pinos_ph)/sizeof(int);i++) pinMode(pinos_ph[i], OUTPUT);
  setVelocity(0, 55);
  setVelocity(1, 55);
  pinMode(ultrassonic_echo, INPUT);
  pinMode(ultrassonic_trig, OUTPUT);
  pinMode(20, OUTPUT);
  pinMode(21, OUTPUT);
  Serial.begin(9600);
  pinMode(24, OUTPUT);
  pinMode(26, OUTPUT);
  pinMode(28, OUTPUT);
}

void loop() {
  algorithm();
  
}
