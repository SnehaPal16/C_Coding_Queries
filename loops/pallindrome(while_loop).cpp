#include<stdio.h>
int main()
{
	int num,temp,digit,sum=0;
	printf("\nenter ur number :");
	scanf("%d",&num);
	temp=num;
	while(num!=0)
	{
		digit=num%10;
		sum=sum*10+digit;
		num=num/10;
		
	}
	if(sum==temp)
		printf("\nthe number is pallindrome");
	else
	printf("\nnot a pallindrome");
	return 0;
}
