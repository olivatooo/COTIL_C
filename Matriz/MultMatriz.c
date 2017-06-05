#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
int i, j, k, aux=0, A[3][3], B[3][3], C[3][3];

for(i=0; i<3; i++){
	for(j=0; j<3; j++)
	{
              printf("Digite A[%d][%d]: ",i+1,j+1);
              scanf("%d", &A[i][j]);
          }
          printf("\n");
      }

for(i=0; i<3; i++)
{
	for(j=0; j<3; j++)
	{
              printf("Digite B[%d][%d]: ",i+1,j+1);
              scanf("%d", &B[i][j]);
        }
        printf("\n");
}

printf("Matriz A \n");
for(i=0; i<3; i++)
{ 
	for(j=0; j<3; j++)
	{
        	printf("%d\t", A[i][j]);
        }
        printf("\n");
}

printf("\nMatriz B \n");
for(i=0; i<3; i++)
{
	for(j=0; j<3; j++)
	{
        	printf("%d\t", B[i][j]);
        }
        printf("\n");
}
for(i=0; i<3; i++)
{
	for(j=0; j<3; j++)
	{
        	C[i][j]=0;
                for(k=0; k<3; k++)
		{
                	C[i][j]+= A[i][k] * B[k][j];
                }
         }
}
printf("\n");
printf("Matriz Resultante \n\n");
for(i=0; i<3; i++)
{
	for(j=0; j<3; j++)
	{
        	printf("%d\t", C[i][j]);
        }
        printf("\n");
}
printf("\n\n");
return 0;
}
