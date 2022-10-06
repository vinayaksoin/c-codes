#include<iostream>
using namespace std;
int main(){
	int a,i,e,c=0,b;
	for(b=1;b<10000;b++)
	{
	a=b;	
	c=0;
	for(i=2;i<a;i++)
	{
		
		if(a%i==0)
		{
			c=c+1;
		}
		
		
	}
	if(c==0)
	{
	cout<<a<<"\n";	
	}
}
}

