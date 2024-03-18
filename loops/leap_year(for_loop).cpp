#include<stdio.h>
int main()
{
	int y;
	for(y=1900;y<=2023;y++)
	{
		if((y%100==0 && y%400==0) || (y%100!=0 && y%4==0))
		{
			printf("\n%d is a LEAP YEAR",y);
		}
		else
		{
			printf("\n%d is NOT a leap year",y);
		}
	}
	return 0;
}
