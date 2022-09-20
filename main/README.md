# Main

Programa do carrinho seguidor de linha. Para modificar o código basta abrir _main.ino_ na IDE do Arduino e escrever nas funções presentes em _algorithm_ e/ou em _debug_.

## main

Entre neste arquivo apenas para definir os pinos dos componentes do projeto. Por patrão já vem definido os pinos do projeto da cadeira de IC.

```cpp
const int pinos_ph[] = {};
```
- Pinos que define os sentidos de movimentação do robô: {motor1_A, motor1_B, motor2_A, motor2_B, ... , motorN_A, motorN_B}

```cpp
const int pinos_v[] = {};
```
- Pinos que define a velocidade de rotação dos motores: {motor1, motor2, ... , motorN}

```cpp
const int ultrassonic_echo = 10;
const int ultrassonic_trig = 8;
```

- Pinos do ultrassônico, utilizado na detecção do objeto

```cpp
const int sensor_ir = valor;
```

- Pino do sensor infravermelho, utilizado na detecção da linha

## Algorithm

```cpp
void algorithm();
```

- Função que implementa a lógica do robô.

## Debug

```cpp
void debug();
```

- Função de teste.

## Ponte H 

Realiza o controle dos motores do robô.

```cpp
void setMode(int motor, char sense);
```

- Seleciona o sentido de um dos motores (motor zero-base {0, 1}) 

|``` char sense ```|Significado| 
|------|--------|
| ```  'F' ```  |Forward |
| ```  'B' ```  |Backward |
| ```  'S' ```  | Stop  |

```cpp
void setVelocity(int motor, int speed);
```

- Função que define a velocidade do motor, recebe como argumento o indice do motor e a velocidade que pertence ao intervalo [0, 255] 

```cpp
void forward();
```

- Função que move o carro para frente

```cpp
void forward(int speed);
```

- Função que move o carro para frente, recebe um argumento para definir a velocidade dos motores pertencente ao intervalor [0, 255]

```cpp
void backward();
```

- Função que move o carro para trás

```cpp
void backward(int speed);
```

- Função que move o carro para trás, recebe um argumento para definir a velocidade dos motores pertencente ao intervalor [0, 255]

```cpp
void stop();
```

- Função que para o carro

```cpp
void turnLeft();
```

- Função que gira o carro para esquerda

```cpp
void turnLeft(int speed);
```

- Função que gira o carro para esquerda, recebe um argumento para definir a velocidade dos motores pertencente ao intervalor [0, 255]

```cpp
void turnRight();
```

- Função que gira o carro para direita

```cpp
void turnRight(int speed);
```

- Função que gira o carro para direita, recebe um argumento para definir a velocidade dos motores pertencente ao intervalor [0, 255]

## Distância

Realiza a leitura do ultrassônico

```cpp
long ultrassonicRead();
```

- Retorna um _long_ correspondendo a distância em 'cm' lido pelo sensor ultrassônico

## Sensor IR

```cpp
bool stayOnBlackLine();
```

- Retorna se está ou não sobre a linha preta.

# Exemplo de código

```cpp
void algorithm(){
   foward();
   delay(1000);
   turnRight();
   delay(500);
}
```

- Faz o carrinho andar para frente por 1 segundo e dopois gira para a direita por meio segundo.
