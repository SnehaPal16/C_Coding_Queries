#include<stdio.h>
#include<malloc.h>
int main()
{
	int n1,n2,n3,max1,max2,max3;
	int *pn1=&n1,*pn2=&n2,*pn3=&n3;
	printf("\nenter the value of n1,n2 n3 : ");
	scanf("%d %d %d",pn1,pn2,pn3);
	max1=(*pn1>*pn2)?*pn1:*pn2;
	max2=(*pn2>max1)?*pn2:max1;
	max3=(*pn3>max2)?*pn3:max2;
	printf("\nmaximum num is : %d",max3);
	
	return 0;
}
