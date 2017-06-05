#include<stdio.h>

int fibonacci(int num)
{
if(num==1|num==2) return 1;
else return fibonacci(num-1)+fibonacci(num-2);
}
main()
{
int n,i;
printf("Quantos numeros da série de Fibonacci deseja?");
scanf("%d",&n);
printf("\nA sequencia com %d numeros é:\n",n);
for (i=0;i<n;i++)
printf("\n%d",fibonacci(i+1));
printf("\n\n");
} 

