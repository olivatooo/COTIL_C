// BIANCA E OLIVATO//
#include<stdio.h>
int main()
{
char p1[7],p2[7];
int i2,i,vdd=0,aux;
printf("\nDigite uma palavra:");
scanf("%s",&p1);
printf("\nDigite outra palavra:");
scanf("%s",&p2);
for(i2=0;i2<8;i2++)
{
aux=0;
for(i=0;i<8;i++)
{
if(aux==0)
{
if(p1[i2]==p2[i])
{
vdd++;
aux=1;
}
}



}
}
if(vdd==8)
{
printf("\nSão anagramas");
}
else
{
printf("\nNão são anagramas");
}
return 0;
}

