#include<stdio.h>
int sumdigit(int);
int main()
{
	int a,s;
	printf("\nenter a number :");
	scanf("%d",&a);
	s=sumdigit(a);
	printf("\nthe sum of digit of %d is %d ",a,s);
	return 0;
}
int sumdigit(int n)
{
	int digit,temp,sumdigit=0;
	temp=n;
	while(n!=0)
	{
		digit=n%10;
		sumdigit=sumdigit+digit;
		n=n/10;
	}
	return sumdigit;
}
