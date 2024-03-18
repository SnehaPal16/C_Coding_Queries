#include<stdio.h>
int main()
{
	int num,digit,temp,e=0,o=0;
	printf("\nenter ur number :");
	scanf("%d",&num);
	temp=num;
	while(num!=0)
	{
		digit=num%10;
		num=num/10;
		if(digit%2==0)
		{
			e++;
		}
		else
		{
			o++;
		}
		
	}
	printf("\ntotal number of even number in %d is %d",temp,e);
	printf("\ntotal number of odd number in %d is %d",temp,o);
	
	
	return 0;
}
