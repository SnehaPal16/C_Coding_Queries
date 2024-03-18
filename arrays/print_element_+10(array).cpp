#include<stdio.h>
int main()
{
	int a[5]={10,20,30,40,50},i;
	for(i=0;i<5;i++)
	{
		printf("\n%d",a[i]);
	}
	printf("\nafter adding 10 to each element ");
	for(i=0;i<5;i++)
	{
		a[i]=a[i]+10;
		printf("\n%d",a[i]);
	}
	return 0;
}
