//   *
//  ***
// *****
//*******
//#include<stdio.h>
//int main()
//{
//	int i,j,n=1,sp=3;
//	/*for(i=1;i<=4;i++)
//	{
//		for(j=1;j<=sp;j++)
//		{
//			printf(" ");
//		}
//		for(j=1;j<=n;j++)
//		{
//			printf("*");
//		}
//		sp--;
//		n+=2;
//		printf("\n");
//	}*/
//	for(i=4;i>=1;i--)
//	{	
//		for(j=i-1;j>=1;j--)
//		{
//			printf(" ");
//		}
//		for(j=n;j>=1;j--)
//		{
//			printf("*");
//		}
//		n=n+2;
//		printf("\n");	
//	}
//	return 0;
//}



//    *
//   **
//  ***
// ****
//*****
//#include<stdio.h>
//int main()
//{
//	int i,j,sp;
//	for(i=1;i<=5;i++)
//	{
//		for(sp=4;sp>=i;sp--)
//		{
//			printf(" ");
//		}
//		for(j=1;j<=i;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
// }     



//   *
//  ***
// *****
//*******
// *****
//  ***
//   *
//#include<stdio.h>
//int main()
//{
//	int i,j,n=1,k=5;
//	for(i=4;i>=1;i--)
//	{
//		for(j=i-1;j>=1;j--)
//			printf(" ");
//		for(j=n;j>=1;j--)
//			printf("*");
//		n+=2;
//		printf("\n");
//	}
//	for(i=1;i<=3;i++)
//	{
//		for(j=1;j<=i;j++)
//			printf(" ");
//		for(j=k;j>=1;j--)
//			printf("*");
//		k-=2;
//		printf("\n");
//	}
//	return 0;
//}



//    1
//   121
//  12321
// 1234321
//123454321
//#include<stdio.h>
//int main()
//{
//	int i,j,sp;
//	sp=4;
//	for(i=1;i<=5;i++)
//	{
//		for(j=sp;j>=1;j--)
//			printf(" ");
//		for(j=1;j<=i;j++)
//			printf("%d",j);
//		for(j=i-1;j>=1;j--)
//			printf("%d",j);
//		sp=sp-1;
//		printf("\n");
//	}	
//	return 0;
//}





//    1
//   212
//  32123
// 4321234
//543212345
//#include<stdio.h>
//int main()
//{
//	int i,j,sp;
//	sp=4;
//	for(i=1;i<=5;i++)
//	{
//		for(j=sp;j>=1;j--)
//			printf(" ");
//		for(j=i;j>=1;j--)
//			printf("%d",j);
//		for(j=2;j<=i;j++)
//			printf("%d",j);
//		sp=sp-1;
//		printf("\n");
//	}
//	return 0;
//}






//    1
//   232
//  34543
// 4567654
//567898765
//#include<stdio.h>
//int main()
//{
//	int i=1,j,sp;
//	sp=4;
//	for(i=1;i<=5;i++)
//	{
//		int n=i;		
//		for(j=sp;j>=1;j--)
//			printf(" ");
//		for(j=1;j<=i;j++)
//		{
//			printf("%d",n);
//			n++;
//		}
//		for(j=2*(i-1);j>=i;j--)
//			printf("%d",j);
//		sp--;
//		printf("\n");
//	}
//	return 0;
//}






//1234554321
//1234  4321
//123    321
//12      21
//1        1
/*#include<stdio.h>
int main()
{
	int i,j,sp;
	sp=2;
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
			printf("%d",j);
		for(j=;j<=4;j++)
			printf(" ");
		for(j=i;j>=1;j--)
			printf("%d",j);
		sp+=2;
		printf("\n");
	}
	return 0;
}*/































