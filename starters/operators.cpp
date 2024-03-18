
/*//even/odd
#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	printf("ENETR THE NO:");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("THE NUM %d IS EVEN",n);
	}
	else
	{
		printf("THE NUM %d IS ODD",n);
	}
	return 0;
}*/




/*//leap year or not
#include<stdio.h>
#include<math.h>
int main()
{
	int y;
	printf("ENTER THE YEAR:");
	scanf("%d",&y);
	if((y%100==0 && y%4==0) || (y%4==0))
	{
		printf("THE YEAR %d IS A LEAP YEAR",y);	
	}
	else
	{
		printf("THE YEAR %d IS NOT A LEAP YEAR",y);
	}
	return 0;
}*/



/*//+ve or -ve
#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	printf("ENETR THE NO:");
	scanf("%d",&n);
	if(n>=0)
	{
		printf("THE NO %d IS POSITIVE",n);
	}
	else
	{
		printf("THE NO %d IS NEGATIVE",n);
	}
	return 0;
}*/





/*//can caste a vote or not
#include<stdio.h>
#include<math.h>
int main()
{
	int age;
	printf("ENETR THE NO:");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("YES, you are eligible to VOTE");
	}
	else
	{
		printf("NO, you are not eligible to VOTE");
	}
	return 0;
}*/




//max out of two
#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,m;
	printf("ENTER TWO NUMS TO BE COMPARED :");
	scanf("%f %f",&a, &b);
	if(a>b)
	{
		printf("%f is greater than %f",a,b);
	}
	else
	{
		printf("%f is greater than %f",b,a);
	}
	
	m=(a>b)? a:b;
	printf("THE LARGEST NO. IS %f",m);
	
	
	return 0;
}



/*//calculate bonus and totala salary
#include<stdio.h>
#include<math.h>
int main()
{
	int bs,bonus,ts;
	printf("enter the salary of employee :");
	scanf("%d",&bs);
	if(bs>=10000)
	{
		bonus=0.10*bs;
		ts=bs+bonus;
		printf("the bonous is %d and the totala salary of the employee is %d",bonus,ts);
	}
	else
	{
		bonus=0.05*bs;
		ts=bs+bonus;
		printf("the bonous is %d and the totala salary of the employee is %d",bonus,ts);
	}
	return 0;
}*/




/*//calculate profit or loss
#include<stdio.h>
#include<math.h>
int main()
{
	float cp,sp,profit,loss;
	printf("ENTER THE COST PRICE AND SELLING PRICE OF THE ITEM :");
	scanf("%f %f",&cp,&sp);
	if(sp>cp)
	{
		profit=sp-cp;
		printf("you got a profit of %f",profit);
	}
	else
	{
		loss=cp-sp;
		printf("you got a loss of %f",loss);
	}
	return 0;
}*/





/*//calculate unit consumed and the bill
#include<stdio.h>
#include<math.h>
int main()
{
	float pr,nr,uc,bill,rate;
	char mt;
	printf("enter previous reading,new reading and metertype : ");
	scanf("%f %f %c",&pr, &nr, &mt);
	uc=nr-pr;
	if(mt=='D')
	{
		rate=4.50;
		bill=uc*rate;
		printf("the unit consumed is %f, the bill is %f",uc,bill);
	}
	else
	{
		rate=5.50;
		bill=uc*rate;
		printf("the unit consumed is %f, the bill is %f",uc,bill);
	}
	return 0;
}*/






/*//greeting acc to gender
#include<stdio.h>
#include<math.h>
int main()
{
	char gender,m,f;
	printf("enter ur gender :");
	scanf("%c",&gender);
	if(gender=='m' || gender=="M")
	{
		printf("GOOD MORNING SIR");
	}
	else
	{
		printf("GOOD MORNING MAM");
	}
	return 0;
}*/












































































































