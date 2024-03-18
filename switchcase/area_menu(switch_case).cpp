#include<stdio.h>
#include<math.h>
int main()
{
	float c;
	int l,b,r,choice;
	printf("\n\t\t\t\tAREA MENU");
	printf("\n1 Area of Rectangle");
	printf("\n2 Area of circle");
	printf("\n\t\t\tEnter ur choice :");
	scanf("%d",&choice);
	switch (choice)
	{
		case 1:
			printf("\nEnter length :");
			scanf("%d",&l);
			printf("\nEnter breadth :");
			scanf("%d",&b);
			c=l*b;
			printf("%.2f",c);
			break;
		case 2:
			printf("\nEnter radius :");
			scanf("%d",&r);
			c=3.14*pow(r,2);
			printf("%.2f",c);
			break;
	}
	return 0;
}
