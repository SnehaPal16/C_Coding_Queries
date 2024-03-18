#include<iostream>
using namespace std;

int hcf(int,int);
int main()
{
	int a,b,c;
	cout<<"enter value of a and b:";
	cin>>a>>b;
	if(a>b)
	{
		c=hcf(a,b);
	}
	else
	{
		c=hcf(b,a);
	}
	cout<<"hcf is : "<<c;
	return 0;
}


 int hcf(int x,int y)
 {
	int r;
	r=x%y;
	if(r!=0)
	{
		hcf(y,r);
	}
	else
	{
		return y;
	}
 	
 }
