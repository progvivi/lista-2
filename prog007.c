#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
void main(){
int i,tamanho;
char string[100];
printf("Digite a string: \n");
gets(string);
printf("A string invertida e:\n");
tamanho = strlen(string);

for(i = tamanho - 1; i >= 0;i--){
printf("%c",string[i]);
}
printf("\n\n");
}
