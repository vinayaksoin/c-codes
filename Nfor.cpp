#include<iostream>
using namespace std;
int main()
{
	int i,j,a,l=0,p=4;
	for(i=1;i<=5;i++)
	{
		cout<<"*";
		for(a=1;a<=l;a++)
		{
			cout<<" ";
		}
		l=l+1;
		cout<<"*";
	
		for(a=1;a<=p;a++)
		{
			cout<<" ";
		}
		p=p-1;
		cout<<"*";
		cout<<"\n";
		
	}
}
