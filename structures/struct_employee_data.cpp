#include<stdio.h>
#include<math.h>
#include<string.h>

struct employee
{
	int eid;
	char ename[50];
	float sal;
};

int main()
{
	employee e[1000];
	int i,n;
	printf("\nenter no. of inputs : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nenter employee id : ");
		fflush(stdin);
		scanf("%d",&e[i].eid);
		printf("\nenter employee name : ");
		fflush(stdin);
		scanf("%s",e[i].ename);
		printf("\nenter employee salary : ");
		fflush(stdin);
		scanf("%f",&e[i].sal);
	}	
	for(i=0;i<n;i++)
	{
		printf("\nenter employee id :%d",e[i].eid);
		printf("\nenter employee name :%s",e[i].ename);
		printf("\nenter employee salary :%f",e[i].sal);
	}
	
	return 0;
}
