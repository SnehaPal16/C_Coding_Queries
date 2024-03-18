#include<stdio.h>
int main()
{
	//remove duplicates
	int a[100],c[100],i,j,n;
	printf("\nenetr no. of elements in 1st array ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(c[j]!=a[i])
			{
				c[j]=a[i];
			}
		}
	}
	printf("ARRAYS AFTER DUPLICATES ARE REMOVED:");
	for(i=0;i<n;i++)
	{
		printf("%d ",c[i]);
	}
	return 0;
}
