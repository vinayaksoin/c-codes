#include<iostream>
using namespace std;
int main()
{
	int n,k,a,y,c=0,i;
	cout<<"Enter number of chips at end :  ";
	cin>>n;
	cout<<"max no of all in:";
	cin>>k;
	
		if(n%2==0)
		{
			for(i=1;i<=k;i++)
			{
				n=n/2;
				c=c+1;
				
			}
		}
		else
		{
			n=(n-1/2);
			c=c+1;
		}
		
}
