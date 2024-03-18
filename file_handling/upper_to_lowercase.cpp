#include<stdio.h>
int main()
{
	FILE *fptr;
	char ch;
	fptr=fopen("ulcase.txt","w");
	if(fptr==NULL)
	{
		printf("\nuable to open");
		return 0;
	}
	printf("\nenter character in upper case and press ^Z to terminate :");
	while((ch=getchar())!=EOF)
	{
		fputc(ch,fptr);
	}
	fclose(fptr);
	
	fptr=fopen("ulcase.txt","r");
	if(fptr==NULL)
	{
		printf("\nunable to open");
		return 0;
	}
	printf("\nreading data from file : ");
	while((ch=fgetc(fptr))!=EOF)
	{
		printf("%c",ch);
		if(ch>=65 && ch<=90);
		{
		printf("%c",ch+32);
		}
	}
	
	fclose(fptr);
		
	return 0;
}



