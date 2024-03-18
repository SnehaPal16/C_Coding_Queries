#include<stdio.h>
#include<string.h>

struct student
{
	int rollno;
	char name[20];
	float fees;
};


int main()
{
	FILE *fptr;
	struct student s;
	char reply='y';
	
	fptr=fopen("student2.dat","a");
	if(fptr==NULL)
	{
		printf("\nUNABLE TO OPEN FILE");
		return 0;
	}
	printf("\nenter records : ");
	printf("\ndo u want to add record : y/n : ");
	scanf("%c",&reply);	
	while(reply=='y')
	{
		printf("\nenter rollno,name,fees : ");
		scanf("%d,%s,%f",&s.rollno,s.name,&s.fees);
		fwrite(&s,sizeof(s),1,fptr);
		fflush(stdin);
		printf("\ndo u want tyo add record : y/n : ");
		scanf("%c",&reply);
	}
	fclose(fptr);
	
	fptr=fopen("student2.dat","r");
	if(fptr==NULL)
	{
		printf("\nUNABLE TO OPEN FILE");
		return 0;
	}
	printf("\nreading record from file : ");
	while((fread(&s,sizeof(s),1,fptr))!=NULL)
	{
		printf("\nROLLNO: %d ",s.rollno);
		printf("\nNAME:   %s ",s.name);
		printf("\nFEES:   %.2f ",s.fees);
	}
	fclose(fptr);
	
	
	return 0;
}
















