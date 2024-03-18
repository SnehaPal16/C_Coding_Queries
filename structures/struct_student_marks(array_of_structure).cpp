#include<stdio.h>
struct student_marks
{
	int rn;
	char name[20];
	float p,c,m;
};
typedef struct student_marks sm;


int main()
{
	sm s[20];
	int i,n;
	float pec;
	printf("\nenter num of inputs : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		fflush(stdin);
		printf("\nenter rollno : ");
		scanf("%d",&s[i].rn);
		printf("\nenter name : ");
		scanf("%s",&s[i].name);
		printf("\nenter marks of phy,chem,math : ");
		scanf("%f %f %f",&s[i].p,&s[i].c,&s[i].m);
	}
	for(i=0;i<n;i++)
	{
		float sum =0;
		printf("\nRoll no.: %d",s[i].rn);
		printf("\nName    : %s",s[i].name);
		printf("\nPCM marks:%.2f %.2f %.2f",s[i].p,s[i].c,s[i].m);
		sum=sum + s[i].p + s[i].c + s[i].m;
		pec=sum/3;
		if(pec>50)
		{
			printf("\nPASS");
		}
		else
		{
			printf("\nFAIL");
		}
	}
	
	return 0;
}
