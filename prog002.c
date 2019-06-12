#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

void main(){
int dia,mes,ano,qtddias = 365,anoatual,idade,anosbissextos;


printf("digite o dia:\n");
scanf("%d",&dia);
printf("digite o mes:\n");
scanf("%d",&mes);
printf("digite o ano:\n");
scanf("%d",&ano);
printf("digite o ano atual:\n");
scanf("%d",&anoatual);
printf("Quantos anos bissextos existem entre o ano que nasceu e o ano atual?  ");
scanf("%d",&anosbissextos);
printf("Qual é a idade do usuário: %d.\n", anoatual-ano);
idade = anoatual-ano;
printf("A quantidade de dias de vida do usuario é: %d*%d+%d = %d\n", qtddias, idade,anosbissextos, qtddias*idade+anosbissextos);
}
