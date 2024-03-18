#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("\nEnter a num :");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	
	}
	printf("sum is %d ",sum);
	if(sum==n)
	{
		printf("\nits a perfect number");
	}
	else
	{
		printf("\nits not a perfect number");
	}
	return 0;
}
