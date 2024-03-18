#include<stdio.h>
#include<math.h>
float area(float);
int main()
{
	float r,a;
	printf("\nenter the radius of circle :");
	scanf("%f",&r);
	a=area(r);
	printf("\nthe area of circle is %f",a);
	return 0;
}
float area(float r)
{
	float z;
	z=3.14*pow(r,2);
	return z;
}
