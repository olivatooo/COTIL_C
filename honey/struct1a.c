#include<stdio.h>
struct
{
char nome[30];
char autor[30],editora[10];
int codigo;
} livros[5];

int main()
{
int i;
for(i=0;i<5;i++)
{
printf("\nDigite o código:");
scanf("%d",&livros[i].codigo);
printf("\nDigite o nome do livro:");
scanf("%s",livros[i].nome);
printf("\nDigite o nome do autor:");
scanf("%s",livros[i].autor);
printf("\nDigite o nome da editora:");
scanf("%s",livros[i].editora);
}
for(i=0;i<5;i++)
{
printf("\n%d",livros[i].codigo);
printf("\n%s",livros[i].nome);
printf("\n%s",livros[i].autor);
printf("\n%s",livros[i].editora);
}
return 0;

}
