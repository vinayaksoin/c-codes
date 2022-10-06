#include<iostream>
using namespace std;
int main()
{
	int a,i,b,d=0,e=1;
	cout<<"Enter a numver ; ";
	cin>>a;
	cout<<"Enter a numver ; ";
	cin>>b;
	cout<<"LCM is equal to :";
	for(i=2;a>1||b>1;)
{
	
	if(a%i==0||b%i==0)
	{
		cout<<i;
		d=i;
		e=(e*d);
		if(a%i==0){
		
		a=a/i;}
		if(b%i==0)
		{
			b=b/i;
		}
		if(a>1||b>1){
		
		cout<<"*";}
	}

	else{
		i++;
	}
}
cout<<"="<<e;

}
