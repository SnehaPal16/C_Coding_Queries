#include<stdio.h>
void prime(int);
int main()
{
	int y;
	printf("\nenter year :");
	scanf("%d",&y);
	prime(y);
	return 0;
}
void prime(int x)
{
	int i,ctr=0;
	for(i=2;i<x;i++)
	{
		if(x%i==0)
		{
			ctr++;
		}
		
	}
	if(ctr==0)
	{
		printf("\nPRIME");
	}
	else
	{
		printf("\nNOT PRIME");
	}
}
