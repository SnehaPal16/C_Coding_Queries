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
	temp=a[n-1];
	for(i=n-1;i>=0;i--)
	{
		a[i+1]=a[i];
	}
	a[0]=temp;
	printf("\narray after shifting :");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	a[0]=temp;
	return 0;
}
