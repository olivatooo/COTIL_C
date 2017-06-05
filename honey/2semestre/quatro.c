#include<stdio.h>
 
char*qual(int a, int b, int c)
{
char*resp;
if (a>b)
{
resp="A>B>C"+a+b+c;
}
return resp;
}


int main()
{
int a,b,c;

printf("\nDigite os nºs: ");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
printf(qual(a,b,c));
}

