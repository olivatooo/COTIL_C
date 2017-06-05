#include<stdio.h>
#include<stdlib.h>
struct
{
char nome[50];
long int telefone;
int idade;
}pessoas[5];

int main()
{
FILE *arq;
int i;
for(i=0;i<5;i++)
{
printf("\n Digite nome da %d pessoa: ",i+1);
scanf("%s",pessoas[i].nome);
printf("\n Digite o telefone: ");
scanf("%d",&pessoas[i].telefone);
printf("\n Digite  a idade: ");
scanf("%d",&pessoas[i].idade);
}
arq=fopen("teste.bin","w+b");
if(!arq)
{
printf("Erro de abertura");
exit(EXIT_FAILURE);
}
fwrite(&pessoas,sizeof(pessoas),5,arq);
fclose(arq);
return 0;
}
