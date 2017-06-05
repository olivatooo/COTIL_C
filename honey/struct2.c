#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE*arq;
int i,n;
char a[30];
arq=
fopen("teste.txt","w+");
if(!arq){
printf("Erro de abertura");
exit(EXIT_FAILURE);
}
else{
printf("Tudo certo\n");
}
for (n=0;n<3;n++)
{
printf("Entre com %da palavra que quer gravar:\n",n+1);
scanf("%s",a);
fprintf(arq,"%s\n",a);
}
fclose(arq);
return 0;
}
