#include<stdio.h>
#include<math.h>
int fact(int);
int main()
{
	int f,a;
	printf("\nenter a number :");
	scanf("%d",&a);
	f=fact(a);
	printf("\nthe factorial of %d is %d",a,f);
	return 0;
}
int fact(int x)
{
	int i,fact=1;
	for(i=x;i>=1;i--)
	{
		fact=fact*i;
	}
	return fact;
}
