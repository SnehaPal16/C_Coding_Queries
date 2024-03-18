//binary to decimal
#include<stdio.h>
#include<math.h>
int main()
{
	int num,temp,digit,sum=0,i=0;
	printf("\nenter ur binary number :");
	scanf("%d",&num);
	temp=num;
	while(num!=0)
	{
		digit=num%10;
		sum=sum+digit*pow(2,i);
		num=num/10;
		i++;
	}
	printf("\nthe decimal equivalent of the binary number is %d",sum);
	return 0;
}
