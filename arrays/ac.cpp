#include<stdio.h>
#include<math.h>
int main()
{
	int a,r,c;
	printf("ENTER THE RADIUS OF CIRCLE:");
	scanf("%d",&r);
	a=3.14*pow(r,2);
	c=2*3.14*r;
	printf("\nTHE AREA OF CIRCLE IS %d",a);
	printf("\nTHE CIRCUMFRENCE OF THE CIRCLE IS %d:",c);
	return 0;
}
