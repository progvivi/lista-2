#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int converterbinario( int a)
{
    int  contador=0, temporario,binario[50];
while(a!=1){
    temporario = a%2;
    a=a/2;
    binario[contador]=temporario;
    contador++;
}
binario[contador]=1;
for(int b = 9; b>=0; b--){
    printf("%d",binario[b]);
}

    return 0;
}

void main(){
    binario[]
}
