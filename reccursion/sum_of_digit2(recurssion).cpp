#include<stdio.h>
int sod(int);
int main()
{
	int a,b;
	printf("\nenter number :");
	scanf("%d",&a);
	b=sod(a);
	printf("\n%d",b);
	
	return 0;
}
int sod(int x)
{
	int sum=0;
	if(x>=10)
	{
		sum=sum+(x%10)+sod(x/10);
	}
	else
	{
		return x;
	}
	return sum;
}
