#include<stdio.h>
void swap(int,int);
int main()
{
	int a,b;
	printf("\nenter two numbers :");
	scanf("%d %d",&a,&b);
	swap(a,b);
	return 0;
}
void swap(int x,int y)
{
	int z;
	z=x;
	x=y;
	y=z;
	printf("%d %d",x,y);
}
