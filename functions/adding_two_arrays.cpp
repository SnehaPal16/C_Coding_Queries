#include<stdio.h>
void add_2_arrays(int,int);
int main()
{
	int a[5]={1,2,3,4,5},b[5]={6,7,8,9,10};
	add_2_arrays(a[5],b[5]);
	return 0;
}
void add_2_arrays(int x[5],int y[5])
{
	int c[5],i;
	for(i=0;i<5;i++)
	{
		c[i]=x[i]+y[i];
	}
	for(i=0;i<5;i++)
	{
		printf("%d",c[i]);
	}
}
