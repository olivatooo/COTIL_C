#include<stdio.h>
#include<stdlib.h>
struct{
int tel;
char nome[20];
}cadastro;

int main()
{
FILE*arq;
FILE*arqbak;
char linha[255];
int n;
do
{
printf("\n\n                  **=============Menu=============**\n");
printf("\nCadastrar(1)\tMostrar tudo(2)\t   Excluir(3)\tConsultar(4)\tSair(0)\n");
scanf("%d",&n);
if (n==1)
	{
	arq=fopen("cadastros.txt","a");
	if (!arq)
		{
		printf("\nErro de leitura");
		exit(EXIT_FAILURE);
		}
	printf("\nDigite o nome de quem quer gravar: ");
	scanf("%s",&cadastro.nome);
	fprintf(arq,"%s\n",cadastro.nome);
        printf("\nDigite o telefone: ");
        scanf("%d",&cadastro.tel);
        fprintf(arq,"%d\n",cadastro.tel);
	printf("\n\n");
	fclose(arq);
	}

if (n==2)
{
	arq=fopen("cadastros.txt","r");
		if (!arq)
                {
                printf("\nErro de leitura");
                exit(EXIT_FAILURE);
                }
	printf("Nome \t Telefone \n");
	while((fscanf(arq,"%s\n",linha))!=EOF)
	{
	printf("\n%s",linha);
	}
	fclose(arq);
}
if(n==3)
{
	arq=fopen("cadastros.txt","r");
	arqbak=fopen("cadastrosbak.txt","a");
	if(!arq)
	{
	printf("\n Erro de Leitura");
	exit(EXIT_FAILURE);
	}
	if(!arqbak)
	{
	printf("\n Erro de Leitura");
        exit(EXIT_FAILURE);
        }
        while((fscanf(arq,"%s\n",linha))!=EOF)
        {
        fprintf(arqbak,"%s\n",linha);
        }
fclose(arq);
fclose(arqbak);
}
if (n==4)
{
	arq=fopen("cadastros.txt","r");
		if (!arq)
                {
                printf("\nErro de leitura");
                exit(EXIT_FAILURE);
                }
	printf("\nDigite o nome para consulta: ");
	scanf("O telefone do nome consultado é:%s",&cadastro.nome);
	while((fscanf(arq,"%s",linha))!=EOF)
	{
	if (!strcmp(linha,cadastro.nome))
	{
	fscanf(arq,"%s",linha);
	printf("%s\n",linha);
	}
}
}


}while (!n==0);

return 0;
}
