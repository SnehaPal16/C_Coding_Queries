
//check prime
#include<stdio.h>
int main()
{
	int num,i=2,ctr=0;
	printf("\nenter ur number :");
	scanf("%d",&num);
	while(i<num)
	{
		if(num%i==0)
		{
			ctr++;
			break;
		}
		i++;
	}
	if(ctr==0)
		printf("\nthe number is prime");
	else
		printf("\nnot prime");
	return 0;
}
