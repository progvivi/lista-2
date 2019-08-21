#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAMANHO 4

void main() {
    int vetor[TAMANHO];
    int eleito = 0;
    int j = 0;
    int long cont = 0;
    int long troca = 0;
    clock_t tempoInicial, tempoFinal;
    srand(time(NULL));
    tempoInicial = clock();
    for (int i = 0; i < TAMANHO; i++) {
        vetor[i] = rand() % 10;
        
    }
    printf("\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d\t", vetor[i]);
    }
    printf("\n");
 
    for (int i = 1; i < TAMANHO; i++) {
        eleito = vetor[i];
        j = i - 1;
        while (j >= 0 && vetor[j] > eleito) {
            vetor[j + 1] = vetor[j];
            j--;
            troca = troca+1;
        }
        cont = cont+1;
        vetor[j + 1] = eleito;
    }
   

    for (int i = 0; i < TAMANHO; i++) {
        printf("%d\t", vetor[i]);
        
    }
    printf("\n");
       printf("qtd de comparaçao:   %ld\n", cont);
    printf("qtd de troca:   %ld \n", troca);
    printf("\n");
    for (int i = 1; i < TAMANHO; i++) {
        eleito = vetor[i];
        j = i - 1;
        while (j >= 0 && vetor[j] < eleito) {
            vetor[j + 1] = vetor[j];
            j--;
            troca = troca+1;
        }
        cont = cont+1;
        vetor[j + 1] = eleito;
    }
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d\t", vetor[i]);
    }
        printf("\n");
    printf("qtd de comparaçao:   %ld\n", cont);
    printf("qtd de troca:   %ld \n", troca);
    tempoFinal = clock();


    printf("Tempo: %f s\n", (double) (tempoFinal - tempoInicial) / CLOCKS_PER_SEC);
}
