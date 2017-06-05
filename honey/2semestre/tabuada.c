#include<stdio.h>

int itera(int *n)
{
int i;
for(i=0;i<11;i++)
{
n[i]=n[i]*i;
return n[i];
}
}




int main()
{
int tipo,n,i;
printf("\nDeseja a Tabuada de qual número?");
scanf("%d",&n);
printf("Deseja usar qual método para realizar a linda conta da TABUADA?(0-iteração/1-recursão):");
scanf("%d",&tipo);
if(tipo==0)
{
for(i=0;i<10;i++)
{
printf("%d",itera(i));
}

}
}

