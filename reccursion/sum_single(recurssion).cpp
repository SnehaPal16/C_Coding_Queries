#include<stdio.h>
int sum_single(int);
int main()
{
	int a,b;
	printf("\nenetr a number :");
	scanf("%d",&a);
	b=sum_single(a);
	printf("\nthe sum of first %d numbers is %d",a,b);
	return 0;
}
int sum_single(int n)
{
	int z;
	if(n<10)
		return n;
	else
		z=n%10 + sum_single(n/10);
		
		if(z>=10)
			return z%10 + sum_single(z/10);
		else
		return z;
}
