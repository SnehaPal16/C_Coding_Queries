#include<stdio.h>
int main()
{
	int num,digit,sum=0,temp;
	printf("\nEnter number :");
	scanf("%d",&num);
	temp=num;
	while(num!=0)
	{
		digit=num%10;
		sum=sum+digit;
		num=num/10;
		
	}
	printf("\nThe sum of digits of %d is %d",temp,sum);
	return 0;
}
