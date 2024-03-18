#include<stdio.h>
int main()
{
	int a[50],i,n,max,min;
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
	max=a[0];
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		else
		{
			min=a[i];
		}
	}
	printf("\nmaximum num is %d",max);
	printf("\nminimum num is %d",min);
	
	return 0;
}
