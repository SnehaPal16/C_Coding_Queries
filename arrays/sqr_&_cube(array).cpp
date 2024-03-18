#include<stdio.h>
#include<math.h>
int main()
{
	int i,a[5]={10,20,30,40,50};
	for(i=0;i<5;i++)
	{
		printf("%d---",a[i]);
		printf("%d  ",a[i]*a[i]);
		printf("%d  ",a[i]*a[i]*a[i]);
		printf("\n");
	}
	return 0;
}
