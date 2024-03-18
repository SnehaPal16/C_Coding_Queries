#include<stdio.h>
int main()
{
	int i,n,avg,sum=0;
	printf("\nEnter a num :");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("\nSum is %d",sum);
	avg=sum/n;
	printf("\nAverage is %d",avg);
	return 0;
}
