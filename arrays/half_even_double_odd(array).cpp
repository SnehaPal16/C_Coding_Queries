#include<stdio.h>
#include<math.h>
int main()
{
	int i,a[5]={1,2,3,4,5};
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	for(i=0;i<5;i++)
	{
		
		if(a[i]%2==0)
		{
			
			printf("%d ",a[i]/2);
		}
		else
		{
			printf("%d ",a[i]*2);	
		}
	}
	return 0;
}
