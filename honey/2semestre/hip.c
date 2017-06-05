#include<stdio.h>
#include<math.h>

float hip(int a,int b)
{
float x;
x=sqrt(a*a+b*b);
return (x);
}

int main()
{
int a,b;
printf("Digite primeiro cateto:");
scanf("%d",&a);
printf("Digite segundo cateto:");
scanf("%d",&b);
printf("A hipotenusa é:%f",hip(a,b));
printf("\n\n");
}
