#include<stdio.h>
int main()
{
	char a[20],b[20],c[40];
	int i,j;
	printf("\nenter string a : ");
	gets(a);
	printf("\nenter string a : ");
	gets(b);
	for(i=0;a[i]!='\0';i++)
	{
		c[i]=a[i];
	}
	for(j=0;b[j]!='\0';j++)
	{
		c[i]=b[j];
		i++;
	}
	c[i]='\0';
	printf("\nconcatinated string is : %s",c);
	return 0;
}
