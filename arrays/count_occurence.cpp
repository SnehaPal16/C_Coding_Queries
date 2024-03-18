#include<stdio.h>
int main()
{
	//count occurence
	int a[100],i,n,j,ctr=0,m;
	printf("\nenter number of elements : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nenter number to count : ");
	scanf("%d",&m);
	for(i=0;i<n;i++)
	{
		if(a[i]==m)
		{
			ctr=ctr+1;
		}
	}
	if(ctr==0)
	{
		printf("\nenter valid number");
	}
	else
	{
		printf("\nthe number %d occured %d times ",m,ctr);	
	}
	
	return 0;
}
