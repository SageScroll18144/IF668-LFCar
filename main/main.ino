const int pinos_ph[4] = {};

void setup() {
  for(int i=0;i<sizeof(pinos_ph)/sizeof(int);i++) pinMode(pinos_ph[i], OUTPUT);
  Serial.begin(9600);//FOR DEBUG
}

void loop() {
  
}
