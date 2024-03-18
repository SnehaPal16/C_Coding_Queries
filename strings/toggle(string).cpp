#include<stdio.h>
int main()
{
	char a[20];
	int i;
	printf("\nenter any string :");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='A' && a[i]<='Z')
		{
			a[i]=a[i]+32;
		}
		else
		{
			a[i]=a[i]-32;
		}
	}
	printf("\nstring is %s",a);
	
	return 0;
}
