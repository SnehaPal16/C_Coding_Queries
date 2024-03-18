
#include<stdio.h>
int main()
{
	int i,n,fact=1;
	printf("\nEnter a num :");
	scanf("%d",&n);
	for (i=n;i>=1;i--)
	{
		fact=fact*i;
	}
	printf("\nThe factorial of %d is %d",n,fact);
	return 0;
}
