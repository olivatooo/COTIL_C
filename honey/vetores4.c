#include<stdio.h>
int main()
{
int i,j,m[3][3];
printf("\n Digitando valores para a matriz\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("\n Digite o num. da linha %d e coluna %d: ",i+1,j+1);
scanf("%d",&m[i][j]);
}
}
printf("\n\nA matriz digitada: \n\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",m[i][j]);
}
printf("\n");
}
return 0;
}

