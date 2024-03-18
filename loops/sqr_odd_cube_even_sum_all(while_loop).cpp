#include<stdio.h>
#include<math.h>
int main()
{
	int num,temp,digit,sum1=0,sum2=0,sum=0,a,b;
	printf("\nenter ur number :");
	scanf("%d",&num);
	temp=num;
	while(num!=0)
	{
		digit=num%10;
		if(digit%2==0)
		{
			a=pow(digit,3);
			sum1=sum1+a;
		}
		else
		{
			b=digit*digit;
			sum2=sum2+b;
		}
		num=num/10;
	}
	sum=sum1+sum2;
	printf("\nThe sum of sqr odd and cube even of digits of %d is %d",temp,sum);
	return 0;
}
