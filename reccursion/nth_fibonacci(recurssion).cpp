#include<stdio.h>
int fibo(int);
int main()
{
	int a,f,i;
	printf("\nenter number :");
	scanf("%d",&a);
	f=fibo(a);
	printf("%d",f);
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
