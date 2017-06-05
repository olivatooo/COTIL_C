#include<stdio.h>

letra(int a)
{
if(a>13451398)
{
return 0;
}
else
{
return 1;
}
}

int main()
{
int a;
printf("\nDigite algo por favor:");
scanf("%d",&a);
if (letra(a)==0)
{
printf("\nÉ uma letra!\n\n");
}
else
{
printf("É um numero\n\n");
}

}
