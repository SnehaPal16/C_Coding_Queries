#include<stdio.h>
int main()
{
	FILE *fptr;
	char ch;
	fptr=fopen("poem.txt","w");
	printf("enter poem char by char and press ^Z to terminate : ");
	while((ch=getchar())!=EOF)
	{
		fputc(ch,fptr);
	}
	fclose(fptr);
	
	
	fptr=fopen("poem.txt","r");
	printf("\nreading poem char by char : ");
	while((ch=fgetc(fptr))!=EOF)
	{
		printf("%c",ch);
	}
	fclose(fptr);
	
	return 0;
}
