#include<stdio.h>
int main()
/*{
	int m,y;
	printf("enter the month no. and year :");
	scanf("%d %d",&m,&y);
	if(m==4 || m==6 || m==9 || m==11)
		printf("no. of days are 30");
	else if(m==2 && ((y%100==0 && y%400==0) && y%4==0))
		printf("no. of days are 29");
	else if(m==2 && ((y%100==0 && y%400!=0) || y%4!=0))
		printf("no. of days are 28");
	else
		printf("no. of days are 31");
	return 0;
}*/



{
	int m,y;
	printf("enter the month no. and year :");
	scanf("%d %d",&m,&y);
	if(m==4 || m==6 || m==9 || m==11)
		printf("no. of days are 30");
	else if(m==2)
	{
		if((y%100==0 && y%400==0) && y%4==0)
			printf("no. of days are 29");
		else
			printf("no. of days are 28");
	}
	else
		printf("no. of days are 31");	
	
	return 0;
}
