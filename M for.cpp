#include<iostream>
using namespace std;
int main()
{
	int i,j,a,k=0,l=8,m=0;
	for(i=1;i<=5;i++)
	{
		cout<<"*";
		for(a=1;a<=k;a++)
		{
			cout<<" ";
		}
		k=k+1;
		cout<<"*";
		for(a=1;a<=l;a++)
		{ 
		 cout<<" ";
		}
		l=l-2;
		cout<<"*";
		for(a=1;a<=m;a++)
		{ 
		 cout<<" ";
		}
		m=m+1;
		cout<<"*";
		cout<<"\n";
	}
}
