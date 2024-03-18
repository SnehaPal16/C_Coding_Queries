#include<stdio.h>
int sod(int);
int main()
{
	int a,b;
	printf("\nenter a number :");
	scanf("%d",&a);
	b=sod(a);
	printf("\nsum of digit of %d is %d",a,b);
	return 0;
}
int sod(int n)
{
	int digit;
	digit=n%10;
	if(n==0)
		return 0;
	else
		return digit+sod(n/10);
}
