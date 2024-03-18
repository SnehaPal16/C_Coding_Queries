#include<stdio.h>
int main()
{
	FILE *fptr1,*fptr2;
	char ch;
	fptr1=fopen("copy1.txt","a");
	if(fptr1==NULL)
	{
		printf("\nunable to open file");
		return 0;
	}
	printf("\nenter character and press ^z to terminate : ");
	while((ch=getchar())!=EOF)
	{
		fputc(ch,fptr1);
	}
	fclose(fptr1);
	
	fptr1=fopen("copy1.txt","r");
	fptr2=fopen("copy2.txt","a");
	
	while((ch=fptr1())!=EOF)
	{
		while((ch))
	}
	
	return 0;
}
