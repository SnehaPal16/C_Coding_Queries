#include<stdio.h>
int main()
/*{
	char gender,ms;
	int age;
	printf("enter the age, gender and marital status of driver :");
	scanf("%d %c %c",&age, &gender, &ms);
	if(ms=='m')
		printf("u are eligibe for insurance");
	else if(ms=='u' && (gender=='m' || gender=='M') && age>25 )
		printf("u are eligibe for insurance");
	else if(ms=='u' && (gender=='f' || gender=='F')&& age>35 )
		printf("u are eligibe for insurance");
	else
		printf("u are not eligibe for insurance");
	return 0;
}*/



{
	char g,ms;
	int age;
	printf("enter the age, gender and marital status of driver :");
	scanf("%d %c %c",&age, &g, &ms);
	if(ms=='m')
		printf("u are eligibe for insurance");
	else if(ms=='u')
	{
		if(g=='m' || g=='M')
		{
			if(age>25)
				printf("u are eligible for insurance");
			else
				printf("u are not eligible for insurance");
		}
		else
		{
			if(age>35)
				printf("u are eligible for insurance");
			else
				printf("u are not eligible for insurance");	
			

		}
	}
	else
		printf("u are not eligible for insurance");
	return 0;	
}
