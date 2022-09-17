# Main

Programa do carrinho seguidor de linha. Para modificar o código basta abrir _main.ino_ na IDE do Arduino e escrever nas funções presentes em _algorithm_ e/ou em _debug_.

## main

Entre neste arquivo apenas para definir os pinos dos componentes do projeto.

```cpp
const int pinos_ph[] = {};
```
- Pinos que define os sentidos de movimentação do robô: {motor1, motor1, motor2, motor2, ... , motorN, motorN}

```cpp
const int ultrassonic = valor;
```

- Pino do ultrassônico, utilizado na detecção do objeto

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
void forward();
```

- Função que move o carro para frente

```cpp
void backward();
```

- Função que move o carro para trás

```cpp
void stop();
```

- Função que para o carro

```cpp
void turnLeft();
```

- Função que gira o carro para esquerda

```cpp
void turnRight();
```

- Função que gira o carro para direita

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
