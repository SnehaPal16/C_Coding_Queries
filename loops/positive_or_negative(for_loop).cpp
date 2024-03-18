#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,num,j,fact=1,num1,p;
	printf("\nEnter a num of input to be taken :");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		int fact=1;
		printf("\nenter ur num :");
		scanf("%d",&num);
		if(num>=0)
		{
			for(j=num;j>=1;j--)
			{
				fact=fact*j;
			}
		printf("factorial of %d is %d",num,fact);
		}
		else
		{
			num1=-1*num;
			for (j=2;j<num1;j++)
			{
				if(num1%j==0)
				{
					p=0;
					break;
				}
				else
				{
					p=1;
				}
		    }
			if(p==1)
			{
				printf("%d is a prime no.",num1);
			}
			else
			{
				printf("%d is not a prime no.",num1);
			}
			
		}
	}
	return 0;
}
