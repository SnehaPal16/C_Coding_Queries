#include<stdio.h>
void hcf(int,int);
int main()
{
	int a,b;
	printf("\nenter value of a abd b :");
	scanf("%d %d",&a,&b);
	if(b>a)
		hcf(a,b);
	else
		hcf(b,a);
	return 0;
}
void hcf(int x,int y)
{
	int r;
	r=y%x;
	if(r==0)
	{
		printf("\n%d",x);
	}
	else
	{
		hcf(r,x);
	}
}
