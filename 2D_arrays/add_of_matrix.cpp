#include<stdio.h>
int main()
{
	int i,j,r1,c1,r2,c2,a[20][20],b[20][20],c[20][20];
	printf("ENTER NUMBER OF ROWS in 1st matrix:");
	scanf("%d",&r1);
	printf("ENTER NUMBER OF COLUMNS in 1st matrix:");
	scanf("%d",&c1);
	printf("ENTER NUMBER OF ROWS in 2nd matrix:");
	scanf("%d",&r2);
	printf("ENTER NUMBER OF COLUMNS in 2nd matrix:");
	scanf("%d",&c2);
	
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<r1;i++)
	{
		printf("\n");
		for(j=0;j<c1;j++)
		{
			printf("%d ",a[i][j]);
		}
	}
	
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	for(i=0;i<r1;i++)
	{
		printf("\n");
		for(j=0;j<c1;j++)
		{
			printf("%d ",b[i][j]);
		}
	}
	
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	
	for(i=0;i<r1;i++)
	{
		printf("\n");
		for(j=0;j<c1;j++)
		{
			printf("%d ",c[i][j]);
		}
	}
	
	return 0;
}
