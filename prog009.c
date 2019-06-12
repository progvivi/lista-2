#include <stdio.h>
#include <string.h>
#include <math.h>

int converterhexadecimal( int a[5])
{
    int decimal=0, contador=4, potencia=0,temporario[5];
while(contador>=0){
    temporario[contador] = a[contador]*pow(16,potencia);
    potencia++;
    decimal=decimal+temporario[contador];
    contador--;
}
printf("%i",decimal);

    return 0;
}
void main(){
    int binario[]={1,2,3,12,1};
    converterhexadecimal(binario);
}
