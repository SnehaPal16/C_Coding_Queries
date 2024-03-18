#include<stdio.h>
#include<math.h>
int main()
{
	int i,n;
	printf("\nEnter a num :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n%d-----> : %d  %d",i,i*i,i*i*i);
	}
	return 0;
}
