#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAMANHO 4

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
///////////////
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAMANHO 4

void main() {
    int vetor[TAMANHO]; //vetor com tamanho definido
    int aux = 0; //varivel para ser usada na troca
    int eleito, menor, posicaoDoMenor;
    int long cont = 0;
    int long troca = 0;
    clock_t tempoInicial, tempoFinal; //Variaveis para guardar o tempo de execucao
    srand(time(NULL)); //Cria uma semente para numeros aleatorios
    tempoInicial = clock(); //inicia contagem do tempo
    for (int i = 0; i < TAMANHO; i++) {
        vetor[i] = rand() % 10; //Atribui um inteiro aleatorio entre 0 e 5
    }
    //Mostra valores do vetor nao ordenado
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d\t", vetor[i]);
    }
    printf("\n");
    //Ordena vetor pelo metodo da da selecao
    for (int i = 0; i < TAMANHO - 2; i++) {// 0 -> penultina posicao
        eleito = vetor[i];
        menor = vetor[i + 1];
        posicaoDoMenor = i + 1;
        for (int j = i + 1; j < TAMANHO; j++) {
            if (vetor[j] < menor) {
                menor = vetor[j];
                posicaoDoMenor = j;
                troca = troca + 1;
            }
            cont = cont + 1;
        }
        if (menor < eleito) {
            vetor[i] = vetor[posicaoDoMenor];
            vetor[posicaoDoMenor] = eleito;
            troca = troca + 1;
        }
        cont = cont + 1;
    }
    //Mostra valores do vetor ordenado
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d\t", vetor[i]);
    }
    printf("\n");
        for (int i = 0; i < TAMANHO - 2; i++) {// 0 -> penultina posicao
        eleito = vetor[i];
        menor = vetor[i + 1];
        posicaoDoMenor = i + 1;
        for (int j = i + 1; j < TAMANHO; j++) {
            if (vetor[j] > menor) {
                menor = vetor[j];
                posicaoDoMenor = j;
                troca = troca + 1;
            }
            cont = cont + 1;
        }
        if (menor > eleito) {
            vetor[i] = vetor[posicaoDoMenor];
            vetor[posicaoDoMenor] = eleito;
            troca = troca + 1;
        }
        cont = cont + 1;
    }
    //Mostra valores do vetor ordenado
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d\t", vetor[i]);
    }

    printf("\n");
    printf("qtd de comparaçao:   %ld\n", cont);
    printf("qtd de troca:   %ld \n", troca);
    tempoFinal = clock(); //finaliza contagem do tempo
    //calcula e mostra o tempo total de execucao
    printf("Tempo: %f s\n", (double) (tempoFinal - tempoInicial) / CLOCKS_PER_SEC);
}
