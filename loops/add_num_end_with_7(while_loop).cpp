#include<stdio.h>
int main()
{
	int n,i=1,j=1,num,digit,sum=0;
	printf("\nenter the number of inputs to be taken :");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("\nenter ur number :");
		scanf("%d",&num);
		i=i+1;
		digit=num%10;
		if(digit==7)
		{
			sum=sum+num;
		}
		
	}
	printf("\nThe sum of numbers is %d",sum);
	return 0;
}
