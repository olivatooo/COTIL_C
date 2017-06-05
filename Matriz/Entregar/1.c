// BIANCA E OLIVATO//
#include<stdio.h>
int main()
{
int v[16],aux,i,n;

for (i=0;i<16;i++)
{printf("\nDigite o valor %d:",i+1);
scanf("%d",&v[i]);
}
for (i=0;i<9;i++)
{
	aux=v[i+8];
	v[i+8]=v[i];
	v[i]=aux;
}
for (i=0;i<16;i++)
{
printf("%d\t",v[i]);
}
return 0;
}
