#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4,5},i,j;
	for(i=0;i<5;i++)
	{
		printf("\n%d",a[i]);
	}
	printf("\nfactorial of each element ");
	for(i=0;i<5;i++)
	{
		int fact=1;
		for(j=a[i];j>=1;j--)
		{
			fact=fact*j;
		}
		printf("\n%d %d",a[i],fact);
	}
		
	return 0;
}
