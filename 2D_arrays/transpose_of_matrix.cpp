#include<stdio.h>
int main()
{
	int a[20][20],i,j,r=3,c=3,temp;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<r;i++)
	{
		printf("\n");
		for(j=0;j<c;j++)
		{
			printf("%d  ",a[i][j]);
		}
	}
	
	for(i=0;i<c;i++)
	{
		printf("\n");
		for(j=0;j<r;j++)
		{
			if(i!=j)
			{
				temp=a[i][j];
				a[i][j]=a[j][i];
				a[j][i]=temp;
			}
			printf("%d  ",a[i][j]);
		}
	}
	
	return 0;
}
