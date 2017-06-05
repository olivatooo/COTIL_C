#include<stdio.h>

float dobro(float a);

int main()
{
float num;
printf("\nDigite um número: ");
scanf("%f",&num);
num=dobro(num);
printf("\nO dobro do numero é %3.2f\n\n",num);
return 0;
}

float dobro(float a)
{
return(a*2);
}
