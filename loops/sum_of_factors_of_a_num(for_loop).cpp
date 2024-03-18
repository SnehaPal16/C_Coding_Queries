#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("\nEnter a num :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
			printf("\n%d",i);
		}
	}
	printf("\nSum of factors of %d is %d",n,sum);
	return 0;
}
