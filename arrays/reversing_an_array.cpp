#include<stdio.h>
int main()
{
	int a[50],i,n;
	printf("\nenter the number of inputs :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nprinting an array :");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nprinting an array after reversing :");
	for(i=n-1;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
	
	return 0;
}
