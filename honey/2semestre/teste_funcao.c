#include<stdio.h>

int ehpar(int a)
{
if (a%2)
return 0;
else
return 1;

}

int main()
{
int num;
printf("\nDigite um numero: ");
scanf("%d",&num);
if(ehpar(num))
printf("\nNúmero é par\n");
else
printf("\nNúmero é ímpar\n");
return 0;
}
