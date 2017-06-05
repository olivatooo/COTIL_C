#include <stdio.h>


int main()

{
  
	int i, j, k, aux, v[5];
  
	for (i=0;i<5;i++)
  
	{
     
		printf("\nDigite o %do. numero do vetor: ",i+1);
     
		scanf("%d",&v[i]);
  
	}

  

	printf("Vetor digitado\n");
  
	for (i=0;i<5;i++)
  
	{
    
		printf("%d\t",v[i]);
  
	}
  
	
	k = 4;
  
	
	for (i=0;i<5;i++) 

	{    
		for (j=0;j<k;j++)
    
		{
	
			if (v[j] > v[j+1])
	
			{
	   
				aux = v[j+1];
	   
				v[j+1] = v[j];
	   
				v[j] = aux;
	
			}
    
		}
  
		k--;
  
	}	
		printf("\n\nVetor ordenado\n");
  
		for (i=0;i<5;i++)
  
		{
    
			printf("%d\t",v[i]);
  
		}
  	
		
	return 0;

}
