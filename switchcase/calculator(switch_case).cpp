#include<stdio.h>
int main()
{
	char choice;
	int a,b,c;
	printf("\n\t\t\t\tCALCULATOR");
	printf("\n + ADD");
	printf("\n - SUBRACT");
	printf("\n * MULTIPLY");
	printf("\n / DIVIDE");
	printf("\n\t\t\tEnter ur choice :");
	scanf("%c",&choice);
	printf("\nEnter numbers :");
	scanf("%d %d",&a, &b);
	switch(choice)
	{
		case '+': c=a+b;
				  printf("%d",c);
				  break;
		case '-': 
				  if(a>b)
				  {
				  	c=a-b;
				  	printf("%d",c);
				  }
				  else
				  {
				  	c=b-a;
				  	printf("%d",c);
				  }
				  break;
		case '*': c=a*b;
				  printf("%d",c);
				  break;
		case '/': c=a/b;
				  printf("%d",c);
				  break;
		default: printf("\nInvalid choice");
	}
	
	
	return 0;
}
