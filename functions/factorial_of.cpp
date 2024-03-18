#include<stdio.h>
int fact(int);
int main()
{
	int a,f;
	printf("\nenter a number");
	scanf("%d",&a);
	f=fact(a);
	printf("\nthe factorial of %d is %d",a,f);
	return 0;
}
int fact(int n)
{
	if(n==1)
		return 1;
	else
		return n*fact(n-1);
}
