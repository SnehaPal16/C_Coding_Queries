#include<stdio.h>
int main()
{
	int n,num,i=1,fact=1,j,k=2,p;
	printf("enter the number of inputs to be taken :");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("\nenter ur number :");
		scanf("%d",&num);
		i=i+1;
		j=num;
		if(num%2==0)
		{
			
			while(j>=1)
			{
				fact=fact*j;
				j--;
			}
			printf("\nThe factorial of %d is %d",num,fact);	
		}
		else
		{
			while(k<num)
			{
				if(num%k==0)
				{
					p=0;
					break;
				}
				else
				{
					p=1;
				}
				k++;
			}
			if(p==1)
			{
				printf("\n%d is a prime no.",num);
			}
			else
			{
				printf("\n%d is not a prime no.",num);
			}
		}
	}
	return 0;
}
