#include<stdio.h>
#include<string.h>
int main()
{
	char a[50][50],c[50][50];
	int i,n;
	printf("\nenter number of strings :");
	scanf("%d",&n);
	printf("\nenter any string :");
	for(i=0;i<n;i++)
	{
		gets(a[i]);
	}
	printf("\nentered string is :");
	for(i=0;i<n;i++)
	{
		printf("%s ",a[i]);
	}
	for(i=0;i<n;i++)
	{
		strcpy(c[i],strrev(a[i]));
	}
	printf("\nReversed:");
	for(i=0;i<n;i++)
	{
		printf("%s ",c[i]);
	}	
	return 0;
}
