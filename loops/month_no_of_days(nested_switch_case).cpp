#include<stdio.h>
int main()
{
	int m,y;
	printf("\nenter month :");
	scanf("%d",&m);
	switch (m)
	{
		case 4:
		case 6:
		case 9:
		case 11:
			printf("\nno of days 30");
			break ;
		
		case 2:
			{
				printf("\nenter year : ");
				scanf("%d",&y);
			
				switch (y%100)
				{
					case 0:
						{
							switch (y%400)
							{
								case 0:
									printf("no of days 29");
									break;
								default:
									if(y%4==0)
									{
										print
									}
							}
						}		
				}
				break ;
			}
		default:
			printf("\n no of days 31");
			break;
	}
	return 0;
}
