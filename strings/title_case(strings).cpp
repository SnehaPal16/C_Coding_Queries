#include<stdio.h>
int main()
{
	char a[20];
	int i;
	printf("\nenter grp of strings : ");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ')
		{
			if(a[i+1]>='a' && a[i+1]<='z')
			{
				a[i+1]=a[i+1]-32;
			}
			else
			{
				a[i+1]=a[i+1];
			}
		}
		else if(i==0)
		{
			a[i]=a[i]-32;
		}
		
	}
	printf("\nnew grp of string is : %s",a);
	
	return 0;
}
