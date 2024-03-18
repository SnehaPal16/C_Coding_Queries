#include<stdio.h>
#include<math.h>
int main()
{
	int num,temp,digit,sum=0,i,ctr=0;
	printf("\nenter ur num :");
	scanf("%d",&num);
	temp=num;
	while(num!=0)
	{
		digit=num%10;
		ctr++;
		num=num/10;
	}
	num=temp;
	while (num!=0)
	{
		digit=num%10;
		sum=sum+pow(digit,ctr);
		num=num/10;
	}
	if(sum==temp)
		printf("\nthe number is armstrong");
	else
		printf("\nnot an armstrong");
	return 0;
}
