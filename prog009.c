#include <stdio.h>
#include <string.h>
#include <math.h>
void main(){
int x;
printf("digite um numero: ");
scanf("%d", &x);
int n = (int) &x;
printf("O endereço da memoria guardando o numero em hexadecimal é : %x\n", &x);
printf("O endereço da memoria guardando o numero em decimal é : %d\n", n);
int temp,cont=0, bin[50];
while(n!=1){
temp=n%2;
n=n/2;
bin[cont]= temp;
cont++;
}
bin[cont]=1;
printf("O endereço da memoria guardando o numero em binario é :");
for(int a =cont;a>=0;a--){
printf("%d", bin[a]);
}
printf("\n");
}
