#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,result;
	printf("\nenter base and exponent :");
	scanf("%d %d",&a,&b);
	result=pow(a,b);
	printf("\nresult is %d",result);
	
	return 0;
}
