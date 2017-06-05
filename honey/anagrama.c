#include<stdio.h>
int main()
{
int v[4],v2[4],i,i2,cont=0;

printf("\nDigite o primeiro vetor:");
for (i=0;i<4;i++)
{
printf("%d",v[i]);
scanf("%d",&v[i]);
}
printf("\nDigite o segundo vetor:");
for (i=0;i<4;i++)
{
scanf("%d",&v2[i]);
}
for (i=0;i<4;i++)
{
i2=4;
i2--;
if(v[i]==v[i2])
{
cont++;
}
}
if (cont=4)
{
printf("\nSao anagramas!");
}
else
{
printf("\nNao sao anagramas :c ");
}
return 0; 
}

