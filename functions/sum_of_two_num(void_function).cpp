//sum of two num
#include<stdio.h>
#include<math.h>
void sum(int,int);
int main()
{
	int a,b;
	printf("\nenter two numbers :");
	scanf("%d %d",&a,&b);
	sum(a,b);
	return 0;
}
void sum(int x,int y)
{
	int z;
	z=x+y;
	printf("\nthe sum is %d",z);
}
