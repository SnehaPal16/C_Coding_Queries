//cal bonus and total salary
/*#include<stdio.h>
#include<math.h>
int main()
{
	float bs,b,ts;
	printf("enter the basic salary:");
	scanf("%f",&bs);
	b=0.10*bs;
	ts=bs+b;
	printf("\nthe bonus is %.2f:",b);
	printf("\ntotala salary is %.3f:",ts);
	return 0;
}*/




//cal gross and net
/*#include<stdio.h>
#include<math.h>
int main()
{
	float basic,hra,da,pf,gross,net;
	printf("enter the basic salary:");
	scanf("%f",&basic);
	printf("enter the house rental amt:");
	scanf("%f",&hra);
	printf("enter the da:");
	scanf("%f",&da);
	printf("enter the pf:");
	scanf("%f",&pf);
	gross=basic+hra+da;
	net=gross-pf;
	printf("the gross income is %.3f:",gross);
	printf("\nthe net salary is %.2f:",net);
	return 0;
}*/




//cal unit consumed and bill
/*#include<stdio.h>
#include<math.h>
int main()
{
	int pr,nr,rate,uc,bill;
	printf("ENTER THE PREVIOUS READING,NEW READING AND RATE PER UNIT:");
	scanf("%d %d %d",&pr, &nr, &rate);
	uc=nr-pr;
	bill=uc*rate;
	printf("THE UNIT CONSUMED AND THE BILL IS %d, %d",uc, bill);
	return 0;
}*/





//compound intrest
/*#include<stdio.h>
#include<math.h>
int main()
{
	float p,r,amt;
	int t,ci;
	printf("ENTER THE PRINCIPAL,RATE AND TIME:");
	scanf("%f %f %d",&p, &r, &t);
	amt=p*pow((1+r/100),t);
	ci=amt-p;
	printf("THE AMOUNT AND COMPOUND INTREST IS IS %f, %d",amt, ci);
	return 0;
}*/




/*//area of triangle
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float s,ar;
	printf("ENTER THE THREE SIDES OF TRIANGLE:");
	scanf("%d %d %d",&a, &b, &c);
	s=(a+b+c)/2;
	ar=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("THE SEMI-PERIMETER AND AREA OF TRIANGLE IS %f, %f",s, ar);
	return 0;
}*/





































































