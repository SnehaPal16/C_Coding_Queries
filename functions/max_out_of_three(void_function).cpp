#include<stdio.h>
#include<math.h>
void max(int,int,int);
int main()
{
	int a,b,c;
	printf("\nenter three numbers :");
	scanf("%d %d %d",&a,&b,&c);
	max(a,b,c);
	return 0;
}
void max(int x,int y,int z)
{
	int m;
	if(x>y)
	{
		if(x>z)
			m=x;
		else
			m=z;
	}
	else
	{
		if(y>z)
			m=y;
		else
			m=z;
	}
	printf("\nthe largest number is %d",m);
}
