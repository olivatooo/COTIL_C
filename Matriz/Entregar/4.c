// BIANCA E OLIVATO //
#include <stdio.h>
int main()
{
int l,c,x, m[5][5],v[5],v2[5],i;
printf("\nMatriz:\n");
for(l=0;l<5;l++)
{
for(c=0;c<5;c++)
{
printf("Digite os valores para m[%d][%d]: ",l+1,c+1);
scanf("%d",&m[l][c]);
}
}
printf("\n\nA matriz digitada:\n\n");

for(l=0;l<5;l++)
{
for(c=0;c<5;c++)
{
printf("%d\t",m[l][c]);
}
printf("\n");
}


for(x=0;x<5;x++)
{ v[x]=0;
        for(i=0;i<5;i++)
        {
            v[x]=m[x][i]+v[x];

        }
}
printf("\nSoma das linhas = ");

    for(x=0;x<5;x++)
    {
        printf("%d\t",v[x]);
    }
 printf("\n\n");



for(x=0;x<5;x++)
{ 
v[x]=0i;
       	for(i=0;i<5;i++)
       	{
       	v[x]=m[i][x]+v[x];
       	}   
}
printf("\nSoma das colunas = ");

    for(x=0;x<5;x++)
    {
        printf("%d\t",v[x]);
    }   
 printf("\n\n");

return 0;
}
