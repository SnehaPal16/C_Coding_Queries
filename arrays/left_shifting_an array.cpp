#include<stdio.h>
int main()
{
	int a[50],i,n,temp;
	printf("\nenter the number of inputs :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\narray :");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	temp=a[0];
	for(i=0;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	a[i]=temp;
	printf("\narray after shifting :");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
