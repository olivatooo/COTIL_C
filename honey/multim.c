#include<stdio.h>
int main()
{
int i2,i,l,k,c,x[3][3],a[3][3],b[3][3];
printf("Digite os valores desejados\n");
for(i=0;i<3;i++)
{
	for (i2=0;i2<3;i2++)
	{
        x[i][i2]=0;
	b[i][i2]=0;
	a[i][i2]=0;
	printf("Digite o valor da matriz A[%d][%d]:",i,i2);
	scanf("%d",&a[i][i2]);
}
}
printf("\n A matriz A é:\n");
for(i=0;i<3;i++)
{
	for (i2=0;i2<3;i2++)
	{
	printf("%d\t",a[i][i2]);
}
printf("\n");
}
printf("Digite os valores desejados\n");
for(i=0;i<3;i++)
{
        for (i2=0;i2<3;i2++)
        {
        printf("Digite o valor da matriz B[%d][%d]:",i,i2);
        scanf("%d",&b[i][i2]);
}
}
printf("\n A matriz B é:\n");
for(i=0;i<3;i++)
{
        for (i2=0;i2<3;i2++)
        {
        printf("%d\t",b[i][i2]);
}
printf("\n");
}
	for(l=0;l<3;l++)
	{
		for(c=0;c<3;c++)
		{
			for(k=0;k<3;k++)
			{
			x[l][c]=a[l][k]*b[k][c]+a[l][k]*b[k][c]+a[l][k]*b[k][c];



}
}
}
printf("\n A matriz C é:\n");
for(i=0;i<3;i++)
{
        for (i2=0;i2<3;i2++)
        {
        printf("%d\t",x[i][i2]);
}
printf("\n");
}
printf("\n A Matriz C ordenada é:\n");
for (i=0;i<3;i++)
{
	for(i2=0;i2<3;i2++)
	{
	if(x[i][i2]>x[i][i2+1])
	{
	b[i][i2]=x[1][i2];
	x[1][i2]=x[1][i2+1];
	x[1][i2]=b[i][i2];
	}
}
printf("\n");
}
printf("\n A matriz C é:\n");
for(i=0;i<3;i++)
{
        for (i2=0;i2<3;i2++)
        {
        printf("%d\t",x[i][i2]);
}
printf("\n");
}

return 0;
}
