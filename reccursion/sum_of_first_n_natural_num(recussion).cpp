#include<stdio.h>
int sum_n(int);
int main()
{
	int a,b;
	printf("\nenetr a number :");
	scanf("%d",&a);
	b=sum_n(a);
	printf("\nthe sum of first %d numbers is %d",a,b);
	return 0;
}
int sum_n(int n)
{
	if(n==0)
		return 0;
	else
		return n+sum_n(n-1);
}
