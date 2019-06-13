#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>


	
void somar(float *a, float *b,float *temp){

*temp = *a+*b;
}
void subtrair(float *a, float *b,float *temp){

*temp = *a-*b;
}
void multiplicar(float *a, float *b,float *temp){

*temp = *a * *b;
}
void dividir(float *a, float *b,float *temp){ 
if(*a>0)
*temp = *a/ *b;

}

void main(){
float temp;
float a,b;

printf("digite um numero:");
scanf("%f",&a);
printf("digite outro numero:");
scanf("%f",&b);
somar(&a, &b, &temp);
printf("a soma dos ponteiros é: %'.2f\n", temp);
subtrair(&a, &b, &temp);
printf("a subtração dos ponteiros é:  %'.2f\n", temp);
multiplicar(&a, &b, &temp);
printf("a multiplicação ds ponteiros é: %'.2f\n", temp);
dividir(&a, &b, &temp);
if(a>0)
printf("a divisão dos ponteiros é: %'.2f\n", temp);

}
