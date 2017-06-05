#include<stdio.h>

int fatorial(int n)
{
int ret;
if(n)return n*fatorial(n-1);
else return 1;
}


int main()
{
int n;
printf("\n\nDigite um valor para n:");
scanf("%d",&n);
printf("\n O fatorial de %d é %d\n\n",n,fatorial(n));
return 0;
}
