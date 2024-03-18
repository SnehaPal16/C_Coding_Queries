#include<stdio.h>
int main()
{
	int a[50],i,n,b[50],c[50],j,m;
	printf("\nenter the number of inputs in 1st array :");
	
	scanf("%d",&n);
	printf("\n1st array :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nenter the number of inputs in 2nd array :");
	scanf("%d",&m);
	printf("\n2nd array :");
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<m;i++)
	{
		printf("%d ",b[i]);
	}
	printf("\nconcatinated array :");
	for(i=0;i<n;i++)
	{
		c[i]=a[i];
	}
	for(j=0;j<m;j++)
	{
		c[i]=b[j];
		i++;
	}
	for(i=0;i<n+m;i++)
	{
		printf("%d ",c[i]);
	}
	
	return 0;
}
