#include<stdio.h>
#include<math.h>
int main()
{
	int fact=1,i,n,x,p;
	float sum=0,d;
	printf("\nenter the value of n and x :");
	scanf("%d %d",&n,&x);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
		p=pow(x,i);
		d=float (p)/fact;
		if(i%2==0)
		{
			sum=sum+(-1)*d;
		}
		else
		{
			sum=sum+d;
		}
	}
	printf("\n sum is %f",sum);
	
	return 0;
}
