#include<stdio.h>
#include<math.h>
void isleap(int);
int main()
{
	int y;
	printf("\nenter the year :");
	scanf("%d",&y);
	isleap(y);
	return 0;
}
void isleap(int x)
{
	if(x%100==0)
	{
		if(x%400==0)
		{
			printf("LEAP YEAR");
		}
		else
		{
			printf("NOT A LEAP YEAR");
		}
	}
	else if(x%4!=0)
	{
		printf("NOT A LEAP YEAR");
	}
	else
	{
		printf("LEAP YEAR");
	}
	
}
