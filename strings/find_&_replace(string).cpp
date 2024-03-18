#include<stdio.h>
int main()
{
	char a[20],ch,r;
	int i;
	printf("\nenter any string : ");
	gets(a);
	printf("\nenter a charater to replace : ");
	scanf("%c",&ch);
	printf("\nenter a charater to be replaced with %c : ",ch);
	fflush(stdin);
	scanf("%c",&r);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==ch)
		{
			a[i]=r;
		}
		else
		{
			a[i]=a[i];
		}
	}	
	printf("\nnew string is : %s",a);
	return 0;
}
