#include<iostream>
using namespace std;
int main()
{
	//greatest of 4
	int a,b,c,d;
	cout<<"Enter Value of a : ";
	cin>>a;
	cout<<"Enter Value of b : ";
	cin>>b;
	cout<<"Enter Value of c : ";
	cin>>c;
	cout<<"Enter Value of d : ";
	cin>>d;
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				cout<<"a is greater";
			}
			else
			{
				cout<<"d is greater";
			}
		}
		else
		{
			if(c>d)
			{
				cout<<"c is greAtest";
			}
			else
			{
				cout<<"d is greatest";
			}
		}
	}
	else
	{
			if(b>c)
		{
			if(b>d)
			{
				cout<<"b is greater";}
			else
			{
				cout<<"d greater";
			}
		}
		else
		{
			if(c>d)
			{
				cout<<"c is greAtest";
			}
			else
			{
				cout<<"d is greatest";
			}
		}
		
	}
	
	
}
