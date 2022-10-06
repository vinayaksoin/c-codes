#include<iostream>
using namespace std;
class op{
	public :
		int var;
		op operator ++()
		{
			op c;
			var =var +1;
			c.var=var;
			return c;
		}
		op operator ++(int z)
		{
			op c;
			c.var=var;
			var=var+1;
			return c;
			
			
		}
};
int main()
{
	op a,b,j;
	a.var=10;
	b=++a;
	j=a++;
	
	cout<<b.var;
	cout<<a.var;
	cout<<j.var;   
	return 0;
}
