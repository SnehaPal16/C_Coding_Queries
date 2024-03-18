#include<stdio.h>
int main()
{
	char a[20],b[20],temp;
	int i;
	printf("\nenter any string :");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		b[i]=a[i];
	}
	printf("\ncopied string is %s",b);
	return 0;
}
