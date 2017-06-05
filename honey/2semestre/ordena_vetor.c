#include<stdio.h>
void ordena(int*v)
{
int i,j;
int temp;
for(i=0;i<9;i++)
{
for(j=i+1;j<10;j++)
{
if(v[i]>v[j])
{
temp=v[j];
v[j]=v[i];
v[i]=temp;
}
}
}
}
int main()
{
int vetor[10];
int x;
for(x=0;x<10;x++)
{
printf("\nDigite o %d numero para o vetor: ",x+1);
scanf("%d",&vetor[x]);
}
ordena(&vetor);
for(x=0;x<10;x++)
printf("\n%d",vetor[x]);
printf("\n");
return 0;
}
