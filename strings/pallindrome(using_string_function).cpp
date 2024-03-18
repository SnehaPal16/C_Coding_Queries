#include<stdio.h>
#include<string.h>
int main()
{
	char a[20],b[20];
	printf("\nenter any string :");
	gets(a);
	strcpy(b,a);
	strrev(b);
	if(strcmp(a,b)==0)
	{
		printf("\nPALLINDROME");
	}
	else
	{
		printf("\nNOT A PALLINDROME");
	}
	return 0;
}
