#include<stdio.h>
int fib(int);
int main()
{
	int n,f;
	printf("\nenter number :");
	scanf("%d",&n);
	f=fib(n);
	printf("%d",f);
	
	return 0;
}
int fib(int x)
{
	int z;
	if(x>2)
	{
		z=fib(x-1)+fib(x-2);
		return z;
	}
	else if(x==1)
	{
		int y=0;
		return y;
	}
	else if(x==2)
	{
		int y=1;
		return y;
	}
}
