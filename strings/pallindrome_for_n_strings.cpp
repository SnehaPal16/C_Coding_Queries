#include<stdio.h>
int main()
{
	char a[20];
	int i,n;
	printf("\nenter number of inputs :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n%d string : ",i);
		fflush(stdin);
		gets(a);
	}
	return 0;
}
