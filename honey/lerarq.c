#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE * arq;
char linha[255];
arq = fopen("teste.txt","r");
if(!arq)
{
printf("Erro de leitura");
exit(EXIT_FAILURE);
} 
printf("\n O que foi lido do arquivo: \n");
while ((fscanf(arq,"%s\n",linha)) !=EOF)
{
printf("\n%s",linha);
}
printf("\n");
return 0;
}

