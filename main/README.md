# Main

Contém a lógica do programa

## Ponte H 

Realiza o controle dos motores do robô.

```cpp
void setMode(int motor, char sense);
```

- Seleciona o sentido de um dos motores (motor zero-base {0, 1}) 

|```cpp char sense ```|Significado| 
|------|--------|
| ```cpp  'F' ```  |Forward |
| ```cpp  'B' ```  |Backward |
| ```cpp  'S' ``  | Stop  |

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
