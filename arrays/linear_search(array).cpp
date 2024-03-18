#include<stdio.h>
int main()
{
	int a[50],i,n,num,ctr=0;
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
	printf("\nenter the number to search :");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(a[i]==num)
		{
			ctr++;
			printf("\nthe number %d is at %d index",num,i);
		}
		else
		{
			ctr=0;
		}
		
	}
	if(ctr==0)
	{
		printf("\nnumber doesnt exists");
	}
	
	return 0;
}
