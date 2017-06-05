#include<stdio.h>
#include<string.h>

mes (int m)
{
char*x;
switch(m)
{
case 1:x="Janeiro"; break;
case 2:x="Fevereiro"; break;
case 3:x="Março"; break;
case 4:x="Abril"; break;
case 5:x="Maio"; break;
case 6:x="Junho"; break;
case 7:x="Julho"; break;
case 8:x="Agosto"; break;
case 9:x="Setembro"; break;
case 10:x="Outubro"; break;
case 11:x="Novembro"; break;
case 12:x="Dezembro"; break;
}
if (m>12) x="Inválido";

return x;
}

int main()
{
int m;
printf("\nDigite o numero do mês: ");
scanf("%d",&m);
printf("%s",mes(m));
printf("\n\n");
}
