#include<stdio.h>
#include<string.h>
struct data
{
	int rollno;
	char name[20];
	float height;
	
};
typedef struct data d;

int main()
{
	d s[3];
	int i,n,flag=0,ctr=0;
	char p[20];
	float sum=0,avg;
	printf("Enter Values:");
	for(i=0;i<3;i++)
	{
		printf("\nENTER ROLL NUMBER:");
		scanf("%d",&s[i].rollno);
		printf("ENTER NAME:");
		scanf("%s",&s[i].name);
		printf("ENTER HEIGHT:");
		scanf("%f",&s[i].height);
	}
	for(i=0;i<3;i++)
	{
		printf("\nRoll Number:%d",s[i].rollno);
		printf("\nName:%s",s[i].name);
		printf("\nHeight:%f",s[i].height);
		sum=sum + s[i].height;
		
		
	}
/*	avg=sum/3;
	printf("\n%.2f",avg);
	printf("\nenter roll no to search :");
	scanf("%d",&n);
	for(i=0;i<3;i++)
	{
		if(s[i].rollno==n)
		{
			printf("\nRoll Number:%d",s[i].rollno);
			printf("\nName:%s",s[i].name);
			printf("\nHeight:%f",s[i].height);
		}
	}
	if(flag=0)
	{
		printf("\nnot found");
	}*/
	
	
	printf("\nenter name to search :");
	scanf("%s",&p);
	for(i=0;i<3;i++)
	{
		if(strcmp(s[i].name,p)==0)
		{
			printf("\nRoll Number:%d",s[i].rollno);
			printf("\nName:%s",s[i].name);
			printf("\nHeight:%f",s[i].height);
			ctr++;
		}
	}
	if(ctr=0)
	{
		printf("\nnot found");
	}	
	
	return 0;
}
