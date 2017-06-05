#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
int a,b;
char n[1];
printf("\nDigite um número : ");
scanf("%d",&a);
printf("\nDigite outro número :");
scanf("%d",&b);
printf("\n A potencia de %d por %d é %5.2f\n",a,b,pow(a,b));
printf("A raiz quadrada de %d é %5.2f\n",a,sqrt(a));
printf("O seno de %d é %f\n",b,sin(b));
printf("O cosseno de %d é %5.2f\n",a,cos(a));
printf("A tangente de %d é %5.2f\n",b,tan(b));
printf("\nDigite um número de um digito(será lido como string):");
scanf("%s",n);
printf("A string %s foi convertida para inteiro como %d\n\n",n,atoi(n));
return 0;}

