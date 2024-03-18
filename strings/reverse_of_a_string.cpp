#include<stdio.h>
int main()
{
	char a[20],temp;
	int i,j,l;
	printf("\nenter any string :");
	gets(a);
	for(l=0;a[l]!='\0';l++);
	j=l-1;
	for(i=0;i<l/2;i++)
	{
		temp=a[j];
		a[j]=a[i];
		a[i]=temp;
		
		j--;
	}
	printf("reversed string is %s",a);
	return 0;
}
