#include<stdio.h>
int fibo(int);
int main()
{
	int a,f,i;
	printf("\nenter number :");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		printf("\n%d",fibo(i));
	}
	return 0;
}
int fibo(int n)
{
	if(n==1)
		return 0;
	else if(n==2)
		return 1;
	else
		return fibo(n-1)+fibo(n-2);
}
