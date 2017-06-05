#include<stdio.h>
#include<stdlib.h>

typedef struct carros
{
 int carro;
 struct placa*prox;
}no;

struct carros*inicio_lava,*inicio_seca,*aux,*novo,*primeirop,*segundop,*antp,*ants;

/*----- Cria Inicio Lavagem------*/

int cria_inicio_lavagem(int n)
{
  if(inicio_lava==NULL)
  {
     inicio_lava=(no*)malloc(sizeof(no));
	if(inicio_lava==NULL)
	  {
	   printf("\nErro na alocacao de memoria");
	   exit(EXIT_FAILURE);
	  }
   inicio_lava->carro=n;
   inicio_lava->prox=NULL;
   }
   else
    {
     printf("\n Fila de carros nao esta vazia");
    }
}

/*------ Adiciona carros na lavagem -------*/
int add_lavagem(int n)
{
  if (inicio_lava==NULL)
  {
  cria_inicio_lavagem(n);
  }
  else
  {
  aux=inicio_lava;
  while(aux->prox!=NULL)
  {
   aux=aux->prox;
  }
  novo=(no*)malloc(sizeof(no));
  if(novo==NULL)
   {
    printf("\n Erro na alocacao de memoria");
    exit(EXIT_FAILURE);
   }
  novo->carro=n;
  novo->prox=NULL;
  aux->prox=novo;
}
}

/*-------Mostra TUDO------*/

void mostra_tudo()
{
	if(inicio_lava==NULL)
	{
		printf("\nLista de lavagem vazia");
	}
  if(inicio_lava!=NULL)
  {
  aux=inicio_lava;
  printf("\n Lista lavagem:\n");
  do
  {
   printf("|%d",aux->carro);
   aux=aux->prox;
  }while(aux!=NULL);
  }
	printf("\n");
	printf("--------------------");
	if(inicio_seca==NULL)
	{
		printf("\nLista de secagem vazia\n");
	}
	else
	{
	aux=inicio_seca;
    printf("\n Lista secagem:\n");
  do
  {
   printf("|%d",aux->carro);
   aux=aux->prox;
  }while(aux!=NULL);
printf("\n\n");
}

}
/*-------Criar inicio secagem-----*/
int criar_inicio_secagem()
{
  if(inicio_seca==NULL)
  {
  	inicio_seca=(no*)malloc(sizeof(no));
	if(inicio_seca==NULL)
	  {
	   printf("\nErro na alocacao de memoria");
	   exit(EXIT_FAILURE);
	  }
   aux=inicio_lava;
   inicio_lava=aux->prox;
   inicio_seca=aux;
   inicio_seca->prox=NULL;
  }
}

/*-------Criar de secagem para lavagem-----*/
int criar_inicio_lavagem_nada()
{
  if(inicio_lava==NULL)
  {
  	inicio_lava=(no*)malloc(sizeof(no));
	if(inicio_lava==NULL)
	  {
	   printf("\nErro na alocacao de memoria");
	   exit(EXIT_FAILURE);
	  }
   aux=inicio_seca;
   inicio_seca=aux->prox;
   inicio_lava=aux;
   inicio_lava->prox=NULL;
  }
}

/*---------Manda para secagem--------*/
int add_secagem()
{
	if(inicio_seca==NULL)
	{
		criar_inicio_secagem();
		return;
	}
	if(inicio_lava==NULL)
	{
		printf("\nNenhum carro na lavagem");
		return;
	}
	else
	  {
	  aux=inicio_seca;
	  while(aux->prox!=NULL)
	  {
	   aux=aux->prox;
	  }
	  novo=(no*)malloc(sizeof(no));
	  if(novo==NULL)
	   {
	    printf("\n Erro na alocacao de memoria");
	    exit(EXIT_FAILURE);
	   }
   novo=inicio_lava;
   inicio_lava=inicio_lava->prox;
   aux->prox=novo;
   novo->prox=NULL;
	}
}

/*----------Mandar p/ lavagem------*/
int manda_lavagem()
{
	if((inicio_lava==NULL)&&(inicio_seca==NULL))
	{
	  printf("\nListas vazias");
	  exit(EXIT_FAILURE);
	}
	if(inicio_lava==NULL)
	{
		criar_inicio_lavagem_nada();
	}
	else
	  {
	  aux=inicio_lava;
	  while(aux->prox!=NULL)
	  {
	   aux=aux->prox;
	  }
	  novo=(no*)malloc(sizeof(no));
	  if(novo==NULL)
	   {
	    printf("\n Erro na alocacao de memoria");
	    exit(EXIT_FAILURE);
	   }
   novo=inicio_seca;
   inicio_seca=inicio_seca->prox;
   aux->prox=novo;
   novo->prox=NULL;
	}
}

/*---------Ordenar Secagem--------*/
int ordenar_secagem()
{
int primeiro,segundo;
    if(inicio_seca==NULL)
	    {
	    	printf("\nLista de secagem vazia!\n\n");
	    	return;
		}
    printf("\n\n Digite o numero do primeiro carro para trocar de posicao na fila com o segundo carro \n");
	printf("\nDigite o numero do primeiro carro:");
	scanf("%d",&primeiro);
	printf("\nDigite o numero do segundo carro:");
	scanf("%d",&segundo);

	/*-Encontra primeiro carro-*/
	aux=inicio_seca;
	while(aux!=NULL)
	{
		if(aux->carro==primeiro)
		{
			primeirop=aux;
			printf("\nPrimeiro carro %d encontrado\n",primeirop->carro);
		}
		aux=aux->prox;
	}

	/*-Encontra segundo carro-*/
	aux=inicio_seca;
	while(aux!=NULL)
	{
		if(aux->carro==segundo)
		{
			segundop=aux;
			printf("\nSegundo carro %d encontrado\n",segundop->carro);
		}
		aux=aux->prox;
	}

	/*-Checa se os dois carros foram encontrados-*/
	if((primeirop==NULL)||(segundop==NULL))
	{
		printf("\Carros nao encontrados na lista de secagem\n\n");
		return;
	}

	/*-Pega as posições anteriores-*/
	aux=inicio_seca;
	while(aux!=NULL)
	{
		if(aux->prox==primeirop)
		{
			antp=aux;
		}
		aux=aux->prox;
	}
	aux=inicio_seca;
	while(aux!=NULL)
	{
		if(aux->prox==segundop)
		{
			ants=aux;
		}
		aux=aux->prox;
	}
	/*-Checa se o inicio foi selecionado-*/
	if(inicio_seca==aux && aux->prox!=ants)
    {
        inicio_seca=antp;
        inicio_seca->prox=primeirop->prox;
        ants->prox=aux;
        aux->prox=segundop->prox;
    }

    /*-Realiza a troca-*/
	else
	{
    aux=primeirop->prox;
    primeirop->prox=segundop->prox;
    segundop->prox=aux;
    antp->prox=segundop;
    ants->prox=primeirop;
    }




}

/*---------Excluir da secagem-----*/
int excluir_secagem()
{
	if(inicio_seca==NULL)
	{
		printf("\nNao existem carros na fila de secagem\n");
		return;
	}
inicio_seca=inicio_seca->prox;

}

/*---------INT MAIN---------------*/
int main()
{
int selecao=9,n;
	inicio_lava=NULL;
	inicio_seca=NULL;
	segundop=NULL;
	primeirop=NULL;
  while(selecao!=0)
    {
     printf("\n--------------MENU---------------\n");
     printf("\n1. Adicionar carros na lavagem");
     printf("\n2. Mostrar tudo");
     printf("\n3. Mandar primeiro carro da lavagem para secagem");
     printf("\n4. Mandar primeiro carro da secagem para lavagem");
     printf("\n5. Ordenar carros na secagem");
     printf("\n6. Remover carro da secagem");
     printf("\n0. Sair do programa");
     printf("\nSelecao:");
     scanf("%d",&selecao);
	switch(selecao)
		{
			case 0:
			printf("Bye :( \n\n");
			exit(EXIT_SUCCESS);
			break;

			case 1:
			printf("\nDigite o numero do carro: ");
			scanf("%d",&n);
			add_lavagem(n);
			break;

			case 2:
			mostra_tudo();
			break;

			case 3:
			add_secagem();
			break;

			case 4:
			manda_lavagem();
			break;

			case 5:
			ordenar_secagem();
			break;

			case 6:
			excluir_secagem();
			break;

		}
    }
}










