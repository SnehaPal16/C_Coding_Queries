#include<stdio.h>
int area(int,int);
int main()
{
	int l,b,a;
	printf("\nenter length and breadth of rectangle :");
	scanf("%d %d",&l,&b);
	a=area(l,b);
	printf("\nthe area of rectangle is %d",a);
	return 0;
}
int area(int x,int y)
{
	int z;
	z=x*y;
	return z;
}
