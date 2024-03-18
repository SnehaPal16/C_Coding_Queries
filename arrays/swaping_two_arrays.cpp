#include<stdio.h>
int main()
{
	int a[50],b[50],c[50],i,n,m;
	printf("\nenter the number of inputs in 1st array :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n1st array :");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nenter the number of inputs in 2nd array :");
	scanf("%d",&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("\n2nd array :");
	for(i=0;i<m;i++)
	{
		printf("%d ",b[i]);
	}
	for(i=0;i<n;i++)
	{
		c[i]=a[i];
		a[i]=b[i];
		b[i]=c[i];
	}
	printf("\nprinting arrays after swaping");
	printf("\n1st array :");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n2nd array :");
	for(i=0;i<m;i++)
	{
		printf("%d ",b[i]);
	}
	return 0;
}
