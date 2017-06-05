//Bianca Campos 14074 , Gabriel Olivato 14077//
#include<stdio.h>
int mult(int k,int n)
{
if(n>1)
{

return k*mult(k,n-1);
}
else
{
return(k);
}
}

int main()
{
int n,k;
printf("\n Digite o valor de k:");
scanf("%d",&k);
printf("\n Digite o valor de n:");
scanf("%d",&n);
if (n==0) printf("1");
printf("\n%d",mult(k,n));
printf("\n");
return 0;
}



