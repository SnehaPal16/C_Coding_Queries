#include<stdio.h>
int main()
{
	FILE *fptr;
	char ch;
	int wctr=0,chctr=0,lctr=0;
	
	
	fptr=fopen("counting.txt","w");
	if(fptr==NULL)
	{
		printf("\nUNABLE TO OPEN FILE ");
		return 0;
	}
	printf("\nenter charaters and press ^Z to terminate : ");
	while((ch=getchar())!=EOF)
	{
		fputc(ch,fptr);
	}
	fclose(fptr);
	
	
	
	fptr=fopen("counting.txt","r");
	if(fptr==NULL)
	{
		printf("\nunable to open file :");
		return 0;
	}
	printf("\nreading data from file :");
	/*while((ch=fgetc(fptr))!=EOF)
	{
		printf("%c",ch);
	}
	fclose(fptr);*/
	
	while((ch=fgetc(fptr))!=EOF)
	{
		printf("%c",ch);
		chctr++;
		if(ch==' ')
		{
			wctr++;
		}
		else if(ch=='\n')
		{
			lctr++;
		}
	}
	printf("\ncounting charater from file : %d",chctr);
	printf("\ncounting words from file : %d",wctr+1);
	printf("\ncounting lines from file : %d",lctr);
	
	fclose(fptr);
	return 0;
}

















