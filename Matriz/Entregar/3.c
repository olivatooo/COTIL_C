//BIANCA E OLIVATO//
#include <stdio.h>
int main()
{
int v[4][4],maior,i2,i,pos,menor,j,lin,col,pos1;
for(i=0;i<4;i++)
{
for(i2=0;i2<4;i2++)
    {
    v[i][i2]=0;
    }
}

printf("Digite o valor da matriz \n");
for(i=0;i<4;i++)
{
for(i2=0;i2<4;i2++)
    {
    printf("Digite o valor da v[%d][%d]: ",i,i2);
    scanf("%d",&v[i][i2]);
    }
}

for(i=0;i<4;i++)
{
for(i2=0;i2<4;i2++)
    {
    printf("\t %d ",v[i][i2]);
    }
printf("\n");
}
maior=0;
for(lin=0;lin<4;lin++)
{
    if(v[lin][0]>maior)
        {
            maior=v[lin][0];
            pos=lin;
        }
}
menor=v[pos][0];
for(col=0;col<4;col++)
{
   if(v[pos][col]<menor)
        {
            menor=v[pos][col];
            pos1=col;
        }
}
 printf("O menor valor da maior linha e: %d",menor);


return 0;
}
