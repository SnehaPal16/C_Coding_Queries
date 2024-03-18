#include<stdio.h>
#include<math.h>
int main()
{
	int l,b,r,a,p,c,choice,ch;
	printf("\n\t\t\t\tMAIN MENU");
	printf("\n1 RECTANGLE");
	printf("\n2 CIRCLE");
	printf("\n\t\t\tENTER CHOICE:");
	scanf("%d",&choice);
	switch (choice)
	{
		case 1:
			{
				printf("\n\t\t\t\tRECTANGLE");
				printf("\n1 Area");
				printf("\n2 Perimeter");
				printf("\n\t\t\tEnter Choice");
				scanf("%d",&ch);
				switch (ch)
				{
					case 1:
						{
							printf("\n enter length :");
							scanf("%d",&l);
							printf("\n enter breadth :");
							scanf("%d",&b);
							a=l*b;
							printf("\nThe area is %d",a);	
							break;
						}
					case 2:
						{
							printf("\n enter length :");
							scanf("%d",&l);
							printf("\n enter breadth :");
							scanf("%d",&b);
							p=2*(l+b);
							printf("\nThe perimeter is %d",p);	
							break;
						}
							
				}
			break;	
			}
		case 2:
			{
				printf("\n\t\t\t\tCIRCLE");
				printf("\n1 Area");
				printf("\n2 Circumfrence");
				printf("\n\t\t\tEnter Choice");
				scanf("%d",&ch);
				switch (ch)
				{
					case 1:
						{
							printf("\n enter radius :");
							scanf("%d",&r);
							a=3.14*pow(r,2);
							printf("\nThe area is %d",a);	
							break;
						}
					case 2:
						{
							printf("\n enter radius :");
							scanf("%d",&r);
							c=2*3.14*r;
							printf("\nThe circumfrence is %d",c);	
							break;
						}	
				}
			break;	
			}
	}
	
	
	return 0;
}
