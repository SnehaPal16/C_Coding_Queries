#include<stdio.h>
int main()
{
	int a[20],i,j,k,n,temp;
	printf("\nenter num of inputs in an array :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nenter number : ");
		scanf("%d",&a[i]);
	}
	printf("\nur array is :");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				for(k=0;k<n;k++)
				{
					printf("\nARRYA AFTER %d pass :%d ",i,a[k]);
				}
			}
		}
	}
	printf("\n sorted array : ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
	
	return 0;
}
