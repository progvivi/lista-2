#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

void main(){
int positivo = 1;
int negativo = 0;
int x,y;
printf("digie o valor de x:\n");
scanf("%d",&x);
printf("digie o valor de y:\n");
scanf("%d",&y);
	if(x >=1 && y>=1 ){
printf("primeiro quadrante.\n");
	}
	else if(x >= 1 && y < 0, x < 0 && y>=1){
printf("segundo quadrante.\n");
	}
	else if(x < 0 && y < 0){
printf("terceiro quadrante.\n");
	}	
	else{
printf("quarto quadrante.\n");
	}
}
