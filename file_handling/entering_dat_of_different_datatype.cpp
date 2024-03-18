#include<stdio.h>
#include<string.h>
int main()
{
	FILE *fptr;
	int rollno;
	char name[20],reply='y';
	float fees;
	
	
	fptr=fopen("student1.txt","a");
	if(fptr==NULL)
	{
		printf("\nUABLE TO OPEN FILE");
		return 0;
	}
	printf("\nenter data");
	while(reply=='y')
	{	
		printf("\nenter rollno., name, fees : ");
		scanf("%d %s %f",&rollno,name,&fees);
		fprintf(fptr,"%d %s %.2f\n",rollno,name,fees);
		printf("\ndo you want to add record: y or n : ");
		fflush(stdin);
		scanf("%c",&reply);
	}
	fclose(fptr);
	
	fptr=fopen("student1.txt","r");
	if(fptr==NULL)
	{
		printf("\nUNABLE TO OPEN FILE");
		return 0;
	}
	printf("\nREADING RECORD FROM FILE: ");
	while((fscanf(fptr,"%d %s %f",&rollno,name,&fees))!=EOF)
	{
		printf("\nROLLNO: %d ",rollno);
		printf("\nNAME:   %s ",name);
		printf("\nFEES:   %.2f ",fees);
	}
	fclose(fptr);
	
	return 0;
}
