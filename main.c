#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
   

    printf("\n\n");
    printf("          P  /_\\  P                              \n");
    printf("         /_\\_|_|_/_\\                            \n");
    printf("     n_n | ||. .|| | n_n          Bem vindo ao    \n");
    printf("     |_|_|nnnn nnnn|_|_|      Jogo de Adivinhação!\n");
    printf("    |" "  |  |_|  |"  " |                         \n");
    printf("    |_____| ' _ ' |_____|                         \n");
    printf("          \\__|_|__/                              \n");
    printf("\n\n");



    int seed = time(0);
    srand(seed);
    
    int numerogrande = rand();

    int secret_number = numerogrande % 100; 
    int guess;
    int ganhou = 0;
    int tentativa = 1;
    double pontos = 1000;

        while(1) {
            
            printf("Tentativa %d \n", tentativa );
            printf("Digite o seu palpite: ");
            scanf("%d", &guess);
            
            if (guess < 0) {
               
                printf("Números negativos não são permitidos! Tente novamente.\n");
                
                 continue; // Pular para a próxima iteração do loop
            
            }

            
            int acerto = (guess == secret_number);            
            int maior = (guess > secret_number);
            
                
            if (acerto) {
                printf("Parabéns! Você acertou o número secreto!\n");
                break; 
                
            } 
            
        
            else if (maior){
                    printf("Que pena! O número secreto é menor que %d.\n", guess);
                }
                
            else {
                printf("Que pena! O número secreto é maior que %d.\n", guess);
            }      
            tentativa++;
            double pontosperdidos = abs((double)(guess - secret_number) / (double)2);
            pontos = pontos - pontosperdidos;
        }
        printf("Fim de jogo!!! \n");
        printf("Você tentou %d vezes para acertar o número secreto.\n", tentativa);
        printf("Sua pontuação final é %.1f pontos.\n", pontos);           
}