#include<stdio.h>
int pow(int,int);
int main()
{
	int b,e,r;
	printf("\nenter base :");
	scanf("%d",&b);
	printf("\nenter exponent :");
	scanf("%d",&e);
	r=pow(b,e);
	printf("%d",r);	
	return 0;
}

int pow(int x,int y)
{
	int z;
	if(y>0)
	{
		z=x*pow(x,(y-1));
		return z;
	}
	else
	{
		return 1;
	}
}
