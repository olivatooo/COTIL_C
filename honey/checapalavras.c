#include <stdio.h>
#include <string.h>
int main ()
{
char palavra[50], copia [50];
printf("\nDigite alguma coisa:");
scanf("%s",palavra);
strcpy(copia,palavra);
printf("\nVocê digitou %s que foi copiado para copia como %s.\n", palavra,copia);
strcat(copia,"COTIL");
printf("\nA palavra COTIL foi concatenada e ficou %s\n",copia);
if(!strchr(palavra,'a'))
{
printf("\nNo que vc digitou NÃO TEM a letra a\n");
}
else
{
printf("\nNo que vc digitou TEM a letra a\n");
}
return 0;}

