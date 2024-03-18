//0 1 1 2 3 5 8...
#include<stdio.h>
int main()
{
	int n,a=0,b=1,i,c;
	printf("\nEnter a num till where u want to print the series :");
	scanf("%d",&n);
	printf("\n%d \n%d",a,b);
	for (i=1;i<=n;i++)
	{
		
		c=a+b;
		printf("\n%d",c);
		a=b;
		b=c;
	}
	return 0;
}
