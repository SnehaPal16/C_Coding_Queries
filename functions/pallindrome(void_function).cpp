#include<stdio.h>
#include<math.h>
void pallindrome(int);
int main()
{
	int a;
	printf("\nenter a number :");
	scanf("%d",&a);
	pallindrome(a);
	return 0;
}
void pallindrome(int n)
{
	int digit,sum=0,temp;
	temp=n;
	while(n!=0)
	{
		digit=n%10;
		sum=sum*10+digit;
		n=n/10;
	}
	if(sum==temp)
	{
		printf("\nPALLINDROME");
	}
	else
	{
		printf("\nNOT A PALLINDROME");
	}
}
