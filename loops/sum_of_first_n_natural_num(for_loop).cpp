#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("\n Enter a num :");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("\n Sum of first %d number is %d",n,sum);
	return 0;
}
