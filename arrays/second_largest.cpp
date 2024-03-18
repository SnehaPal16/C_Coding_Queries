#include<stdio.h>
int main()
{
	//second largest
	int a[100],i,n,temp,j;
	printf("\nenter number of elements : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\nsorted array : ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nsecond largest element is : %d",a[n-2]);
	
	
	return 0;
}
