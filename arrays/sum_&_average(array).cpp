#include<stdio.h>
int main()
{
	int a[5]={10,20,30,40,50},i,sum=0,avg;
	for(i=0;i<5;i++)
	{
		printf("\n%d",a[i]);
		sum=sum+a[i];
	}
	avg=sum/5;
	printf("\nsum and avg is %d %d",sum,avg);
	return 0;
}
