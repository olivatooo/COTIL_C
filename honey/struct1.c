#include<stdio.h>
#include<string.h>
struct
{
char nome[50];
char endereco[50];
int telefone;
int idade;
}dados;
struct
{
int dia,mes,ano;
}data;
int main()
{
printf("\n Digite o seu nome: ");
fgets(dados.nome,50,stdin);
printf("\n Digite seu endereço: ");
fgets(dados.endereco,50,stdin);
printf("\n Digite seu telefone: ");
scanf("%d",&dados.telefone);
printf("\n Digite sua idade: ");
scanf("%d",&dados.idade);
printf("\n Digite o dia do seu nascimento: ");
scanf("%d",&data.dia);
printf("\n Digite o mês do seu nascimento: ");
scanf("%d",&data.mes);
printf("\n Digite o ano do seu nascimento: ");
scanf("%d",&data.ano);

printf("\n Olá %s! Seu telefone é %d",dados.nome,dados.telefone);

printf("\nVocê nasceu em %d/%d/%d\n\n",data.dia,data.mes,data.ano);


return 0;

}
