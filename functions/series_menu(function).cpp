#include<stdio.h>
void odd();
int main()
{
	int choice;
	while(1)
	{
		printf("\n\t\t\t\tSERIES MENU");
		printf("\n1. ODD :");
		printf("\n2. EVEN :");
		printf("\n3. FIBBONACCI :");
		printf("\n4. EXIT");
		printf("\n\t\t\tEnter Choice :");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				{
					odd();
					break;
				}
			case 2:
				{
					int i=1,num=2;
					while(i<=5)
					{
						printf("\n%d",num);
						i=i+1;
						num=num+2;
					}
					break;	
				}
			case 3:
				{
					int i=1,a=0,b=1,c;
					while(i<=5)
					{
						printf("\n%d",a);
						c=a+b;
						a=b;
						b=c;
						i=i+1;
					}
					break;
				}
			default : return 0;
		}
	}
	
	return 0;
}
void odd()
{
	int i=1,num=1;
	while(i<=5)
	{
		printf("\n%d",num);
		i=i+1;
     	num=num+2;
	}
	
}
