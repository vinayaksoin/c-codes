#include<iostream>
using namespace std;
int main()

{
	int i,j,k=1,a,s=4,c;
	for(i=1;i<=5;i++)
	{
		for(a=0;a<=s;a++){
			cout<<" ";
		}
		
			for(j=1;j<=i;j++)
			{
				cout<<"*";
			}
			for(c=i-1;c>=1;c--)
			{
			cout<<"*";	
			}
			
			cout<<"\n";
			s=s-1;
			
	}
}
