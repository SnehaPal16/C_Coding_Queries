#include<stdio.h>
int main()
{
	int i,n,num,e=0,o=0;
	printf("\nEnter a num of input to be taken :");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		printf("\nenter ur num :");
		scanf("%d",&num);
		if(num%2==0)
		{
			e++;
		}
		else
		{
			o++;
		}
	}
	printf("\nTotal numbers of even no.s are %d",e);
	printf("\nTotal numbers of odd no.s are %d",o);

	return 0;
}
