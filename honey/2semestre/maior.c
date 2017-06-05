#include<stdio.h>

int maior(int a,int b)
{
if(a>b)
return a;
else
return b;
}

int igual(int a, int b)
{
if(a==b)
return 1;
else
return 0;
}


int main()
{
int a,b;
printf("\nDigite o valor de A: ");
scanf("%d",&a);
printf("\nDigite o valor de B: ");
scanf("%d",&b);
if(igual(a,b))
{
printf("\nSão iguais\n\n");
}
else
{
a=maior(a,b);
printf("\nO maior valor é: %d\n\n",a);
}
}
