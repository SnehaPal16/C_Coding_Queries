#include<stdio.h>
int nod(int,int);
int main()
{
	int m,y,d;
	printf("\nenter month and year :");
	scanf("%d %d",&m,&y);
	d=nod(m,y);
	printf("\nthe number of days is %d",d);
	return 0;
}
int nod(int x,int y)
{
	if(x==4||x==6||x==9||x==11)
	{
		return 30;
	}
	else if(x==2)
	{
		if((y%100==0 && y%400==0) || (y%100!=0 && y%4==0))
			return 29;
		else
			return 28;		
	}
	else
		return 31;
}
