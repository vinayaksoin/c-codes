#include<iostream>
using namespace std;
int main()
{
	int i,j,n,d,f=0,h=0;
	char a[50],b;
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		h=h+1;
	}
	for(i=0;a[i]!='\0';i++)
	{
		for(n=1;n<h;n=n+2)
		{
			
		
		if(a[i]=='{'&&a[i+n]=='}')
		{
			a[i]=a[i+1];
			f=f+2;
			
			
		}
			if(a[i]=='('&&a[i+n]==')')
		{
			a[i]=a[i+1];
			f=f+2;
			
		}
			if(a[i]=='['&&a[i+n]==']')
		{
			a[i]=a[i+1];
			f=f+2;
			
		}
		
		
	}
		
	}
		if(f==h)
	{
		cout<<"Balanced";
		}
		else
		{
			cout<<"UnBalanced";
		}


}
