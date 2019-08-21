include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAMANHO 100000

void main() {
    int  vetor[TAMANHO]; 
    int aux = 0; 
    int long cont = 0;
    int long troca = 0;
    clock_t tempoInicial, tempoFinal; 
    srand(time(NULL)); 
    tempoInicial = clock(); 
    for (int i = 0; i < TAMANHO; i++) {
        vetor[i] = rand() % 10; 
    }
    
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d\t", vetor[i]);
    }
    printf("\n");
    
    for (int i = 1; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
                troca = troca + 1;
            }
            cont = cont + 1;
        }
        printf("\n");
    }
     for (int i = 0; i < TAMANHO; i++) {
        printf("%d\t", vetor[i]);
     }
    for (int i = 1; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO - 1; j++) {
            if (vetor[j] < vetor[j + 1]) {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
                troca = troca + 1;
            }
            cont = cont + 1;
        }
        printf("\n");
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
