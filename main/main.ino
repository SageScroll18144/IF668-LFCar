const int pinos_ph[] = {};
const int ultrassonic = 0;
const int sensor_ir = 0;

void setup() {
  for(int i=0;i<sizeof(pinos_ph)/sizeof(int);i++) pinMode(pinos_ph[i], OUTPUT);
  Serial.begin(9600);//FOR DEBUG
}

void loop() {
  debug();
  //algorithm();
}
