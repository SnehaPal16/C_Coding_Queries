#include<stdio.h>
int main()
{
	char a[20],temp,ch,b[20];
	int i,j,k,flag=1;
	printf("\nenter any string :");
	gets(a);
	for(i=0;a[i]!='\0';i++);
	j=i-1;
	for(k=0;k<i/2;k++)
	{
		temp=a[k];
		a[k]=a[j];
		a[j]=temp;
		j--;
	}
	for(i=0;a[i]!='\0';i++)
	{
		b[i]=a[i];
	}
	printf("\nreversed string is :%s",b);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]!=b[i])
		{
			flag=0;
			break;
		}
	}
	if(flag==1)
	{
		printf("\npallindrome");
	
	}
	else
	{
		printf("\nNot pallindrome");
	}
	return 0;
}
