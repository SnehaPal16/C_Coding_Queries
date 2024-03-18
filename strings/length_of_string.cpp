#include<stdio.h>
int main()
{
	char a[20];
	int i=0;
	printf("\nenter any string :");
	gets(a);
	for(i=0;a[i]!='\0';i++);
	printf("\nlength of string is %d",i);
	return 0;
}
