#include<stdio.h>
void fibo(int);
int main()
{
	int n;
	printf("\nenter a number till where u want to print the series :");
	scanf("%d",&n);
	fibo(n);
	return 0;
}
void fibo(int x)
{
	int a=0,b=1,c,i=1;
	while(i<=x)
	{
		printf("%d\n",a);
		c=a+b;
		a=b;
		b=c;
		i++;
	}
}
