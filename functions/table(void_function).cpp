#include<stdio.h>
#include<math.h>
void table(int);
int main()
{
	int a;
	printf("\nenter a number to print its table :");
	scanf("%d",&a);
	table(a);
	return 0;
}
void table(int n)
{
	int i;
	for(i=1;i<=10;i++)
	{
		printf("\n%d * %d = %d",n,i,n*i);
	}
}
