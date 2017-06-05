#include<stdio.h>
int main()
{
int i,cont,g;
char v[4],v2[4];

for(i=0;i<4;i++)
{
printf("Vetor no %d :",i);
scanf("%c",&v[i]);
}
printf("\n");
for(i=0;i<4;i++)
{
printf("Vetor no %d :",i);
scanf("%c",&v2[i]);
}
printf("\n");
cont=4;
g=0;
for(i=0;i<4;i++)
{
cont--;
if(v[i]==v2[cont]) 
{
g++;
}
}
if (g==4)
{
printf("Sao anagramas");
}
printf("%d",g);
printf("%d",cont);
}
