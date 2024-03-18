#include<stdio.h>
int power(int,int);
int main()
{
	int b,e,p;
	printf("\nenter a number and exponent :");
	scanf("%d %d",&b,&e);
	p=power(b,e);
	printf("\n ans:--- %d",p);
	return 0;
}
int power(int n,int ex)
{
	if(n==1||ex==0)
		return 1;
	else
		return n*power(n,ex-1);
}

