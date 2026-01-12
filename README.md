# 📚 Jogo de Adivinhação (Estudo em C)

Este é o meu primeiro projeto prático utilizando a linguagem **C**. O objetivo foi aplicar conceitos fundamentais de lógica de programação criando um jogo de console interativo.

## 🎯 Sobre o Projeto

O programa gera um número aleatório entre 0 e 99 e desafia o usuário a adivinhá-lo. O jogo oferece feedback (maior/menor), conta as tentativas e possui um sistema de pontuação que penaliza chutes distantes do alvo.

## 📝 Conceitos Praticados

Durante o desenvolvimento deste código, apliquei os seguintes fundamentos da linguagem C:

* **Estrutura básica:** Uso de diretivas `#include` e função `main`.
* **Variáveis e Tipos:** Manipulação de `int` e `double`.
* **Entrada e Saída:** Uso de `printf` para exibir mensagens (incluindo arte ASCII) e `scanf` para ler dados.
* **Controle de Fluxo:**
    * `if/else`: Para verificar acertos e validar entradas negativas.
    * `while(1)`: Para criar o loop infinito do jogo até a vitória.
* **Matemática e Lógica:**
    * Geração de números pseudo-aleatórios com `rand()` e `srand(time(0))`.
    * Operador de resto da divisão (`%`) para limitar o intervalo do número secreto.
    * **Casting:** Conversão explícita de tipos no cálculo da pontuação (`(double)`).

## 🚀 Como rodar

1.  **Clone o repositório:**
    ```bash
    git clone https://github.com/Txagouuu/project-c.git
    ```
2.  **Compile o código** (necessário ter o GCC instalado):
    ```bash
    gcc main.c -o jogo
    ```
3.  **Execute:**
    * Linux/Mac: `./jogo`
    * Windows: `jogo.exe`

## 💻 Exemplo de Código

Um trecho interessante onde aprendi sobre *casting* (conversão de tipos) para não perder a precisão decimal na pontuação:

```c
// Conversão de int para double para garantir divisão com casas decimais
double pontosperdidos = abs((double)(guess - secret_number) / (double)2);

