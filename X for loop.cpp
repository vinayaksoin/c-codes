#include<iostream>
using namespace std;
int main()
{
	int i,a,l=0,j=8,k=4,m=0;
	for(i=1;i<=5;i++)
	{
		for(a=1;a<=l;a++)
		{
			cout<<" ";
		}
		l=l+1;
		cout<<"*";
		for(a=1;a<=j;a++)
		{
			cout<<" ";
		}
		j=j-2;
	cout<<"*";
	
		
		cout<<"\n";
	}
	for(i=1;i<=5;i++)
	{
		for(a=1;a<=k;a++)
		{
			cout<<" ";
		}
		k=k-1;
		cout<<"*";
		for(a=1;a<=m;a++)
		{
			cout<<" ";
		}
		m=m+2;
		cout<<"*";
		cout<<"\n";
		
	}
}
