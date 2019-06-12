#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

void main(){
	int vetor[7][7];
for(int l = 0; l < 7; l++){
	vetor[l][0] = 1;
}
vetor[1][1] = 1;
	for(int l = 2; l < 7; l++){
		
		for(int c = 1; c <= l; c++){
		if(c != l)
	vetor[l][c] = vetor[l-1][c-1] + vetor[l-1][c];
		else
	vetor [l][c] = 1;
		}
		
	}		
for(int l = 0; l < 1; l++){
printf("              ");
	for(int c = 0; c <= l; c++){
		printf(" [%d]", vetor[l][c]);
	}
printf("\n");
	for(int l = 1; l < 2; l++){
printf("            ");
	for(int c = 0; c <= l; c++){
		printf(" [%d]", vetor[l][c]);
	}
printf("\n");
	}	
	for(int l = 2; l < 3; l++){
printf("          ");
	for(int c = 0; c <= l; c++){
		printf(" [%d]", vetor[l][c]);
	}
printf("\n");
	}
	for(int l = 3 ; l < 4; l++){
printf("        ");
	for(int c = 0; c <= l; c++){
		printf(" [%d]", vetor[l][c]);
	}
printf("\n");
	}
	for(int l = 4 ; l < 5; l++){
printf("      ");
	for(int c = 0; c <= l; c++){
		printf(" [%d]", vetor[l][c]);
	}
printf("\n");
	}
	for(int l = 5 ; l < 6; l++){
printf("   ");
	for(int c = 0; c <= l; c++){
		printf( " [%d]", vetor[l][c]);
	}
printf("\n");
	}
	for(int l = 6 ; l < 7; l++){
printf(" ");
	for(int c = 0; c <= l; c++){
		printf(" [%d]", vetor[l][c]);
	}
printf("\n");
	}
	}
}
