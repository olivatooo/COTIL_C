#include<stdio.h>
#include<string.h>

char* maior(int a,int b)
{
char*x;
if(a>b)
{
x=("A é maior que B");
}
else if (a<b)
{
x=("B é maior que A");
}
else
{
x="Os números são iguais";
}
return x;
}

int main()
{
int a,b;
printf("\nDigite o valor de A: ");
scanf("%d",&a);
printf("\nDigite o valor de B: ");
scanf("%d",&b);
printf(maior(a,b));
printf("\n");
return 0;

}

