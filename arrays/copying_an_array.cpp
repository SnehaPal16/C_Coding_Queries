#include<stdio.h>
int main()
{
	int a[50],i,n,b[50];
	printf("\nenter the number of inputs :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nactual array : ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nafter copying : ");
	for(i=0;i<n;i++)
	{
		b[i]=a[i];
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",b[i]);
	}
	return 0;
}
