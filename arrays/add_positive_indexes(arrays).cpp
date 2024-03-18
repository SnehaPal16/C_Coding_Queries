#include<stdio.h>
int main()
{
		int a[5]={10,20,3,40,5},i,sum=0;
	for(i=0;i<5;i++)
	{
		printf("\n%d",a[i]);
		if(i%2==0)
			sum=sum+a[i];
	}
	printf("\nsum is %d",sum);
	return 0;
}
