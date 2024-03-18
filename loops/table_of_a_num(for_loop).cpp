#include<stdio.h>
int main()
{
	int i,n,table;
	printf("\nEnter a num :");
	scanf("%d",&n);
	for (i=1;i<=10;i++)
	{
		/*table=n*i;
		printf("\n%d * %d = %d",n,i,table);
	*/
		printf("\n%d * %d = %d",n,i,n*i);
	}
	
	return 0;
}
