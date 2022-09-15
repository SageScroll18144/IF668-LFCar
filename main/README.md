# Main

Programa do carrinho seguidor de linha. Para modificar o código basta abrir _main.ino_ na IDE do Arduino e escrever nas funções presentes em _algorithm_ e/ou em _debug_.

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
