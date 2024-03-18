#include<stdio.h>
#include<math.h>
void armstrong(int);
int main()
{
	int a;
	printf("\nenter a number :");
	scanf("%d",&a);
	armstrong(a);
	return 0;
}
void armstrong(int n)
{
	int digit,temp,sum=0,ctr=0;
	temp=n;
	while(n!=0)
	{
		digit=n%10;
		ctr++;
		n=n/10;
	}
	n=temp;
	while(n!=0)
	{
		digit=n%10;
		sum=sum+pow(digit,ctr);
		n=n/10;
	}
	if(sum==temp)
	{
		printf("\nARMSTRONG");
	}
	else
	{
		printf("\nNOT AN ARMSTRONG");
	}
}
