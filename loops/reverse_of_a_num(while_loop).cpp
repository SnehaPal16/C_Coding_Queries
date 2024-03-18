#include<stdio.h>
int main()
{
	int num,temp,sum=0,digit;
	printf("\nenter ur num :");
	scanf("%d",&num);
	temp=num;
	while(num!=0)
	{
		digit=num%10;
		sum=sum*10+digit;
		num=num/10;
		
	}
	printf("\nthe reverse of %d is %d",temp,sum);
	return 0;
}
