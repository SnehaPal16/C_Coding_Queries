#include<stdio.h>
int main()
{
		int a[5]={7,11,3,9,5},i,sum=0,j,ctr=1;
	for(i=0;i<5;i++)
	{
		printf("\n%d",a[i]);
		for(j=2;j<a[i];j++)
		{
			if(a[i]%j==0)
			{
				ctr=ctr+1;
				break;	
			}
			else
			{
				ctr=0;
			}
		}
		if(ctr==0)
		{
			sum=sum+a[i];
		}
		else if(a[i]==2)
		{
			sum=sum+a[i];
		}
		
	}
	printf("\nsum is %d",sum);
	
	return 0;
}
