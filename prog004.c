#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

void main(){
	float m, media, desvio, p;
    int vetor[10];
    media = 0;
    m = 0;
    desvio = 0;
    p = 0;
    for(int i = 0; i < 10; i++){
	        printf("Digite um número: ");
        scanf("%d", &vetor[i]);
    }
    for(int i = 0; i < 10; i++){
       m = m + vetor[i];
    }
    media = m / 10.0;
    for(int i = 0; i < 10; i++){
        p = (vetor[i] - media)*(vetor[i] - media)+(vetor[i] - media)*(vetor[i] - media)+(vetor[i] - media)*(vetor[i] - media)+(vetor[i] - media)*(vetor[i] - media)+(vetor[i] - media)*(vetor[i] - media)+(vetor[i] - media)*(vetor[i] - media)+(vetor[i] - media)*(vetor[i] - media)+(vetor[i] - media)*(vetor[i] - media)+(vetor[i] - media)*(vetor[i] - media)+(vetor[i] - media)*(vetor[i] - media)/10;
    }
    desvio = sqrt((p)/10);
    printf("Resultado desvio = %.2f\n", desvio);
	printf("Resultado media = %.2f\n", media);
}

