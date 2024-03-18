#include<stdio.h>
int reverse(int);
int main()
{
	int a,r;
	printf("\nenter a number :");
	scanf("%d",&a);
	r=reverse(a);
	printf("\nthe reverse of %d is %d",a,r);
	return 0;
}
int reverse(int n)
{
	int digit,temp,sum=0,reverse;
	temp=n;
	while(n!=0)
	{
		digit=n%10;
		sum=sum*10+digit;
		n=n/10;
	}
	reverse=sum;
	return reverse;
}
