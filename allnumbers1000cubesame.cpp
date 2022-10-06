#include<iostream>
using namespace std;
int main()
{
	int a,sum=0,b,d,e;
	
	for(a=1;a<=1000;a++)
	{
	d=a;
	e=a;
	for(;e>0;)
	{
		b=e%10;
		sum=sum+(b*b*b);
		e=e/10;
	}
if(sum==d)
	{
		cout<<"YES";
		cout<<sum;
	}
	
	
}
}
