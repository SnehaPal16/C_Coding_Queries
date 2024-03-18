//max out of two
#include<stdio.h>
#include<math.h>
int max(int,int);
int main()
{
	int a,b,c;
	printf("enter two numbers :");
	scanf("%d %d",&a,&b);
	c=max(a,b);
	printf("\nlargest number is %d",c);
	return 0;
}
int max(int x,int y)
{
	if(x>y)
		return x;
	else
		return y;
}
