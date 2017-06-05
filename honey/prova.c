#include<stdio.h>
int main()
{
int i,v[3][5],cont,lin,col;
for(lin=0;lin<3;lin++)
{
for(col=0;col<5;col++)
{
v[lin][col]=0;
}
}
for(lin=0;lin<3;lin++)
	{
	cont=3;
	for(col=4-lin;col>=0;col--)
		{
		v[lin][col]=cont--;
		}
	}
for(lin=0;lin<3;lin++)
{
for(col=0;col<5;col++)
{
printf("%d\t",v[lin][col]);
}
printf("\n");
}
}
