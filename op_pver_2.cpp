#include<iostream>
using namespace std;
class Student
{
	public :
	void add()
	{
		cout<<"hello"<<endl;
	}
	void operator+(int a)
	{
		cout<<"hello from operator"<<a<<endl;
	}
	void operator+()
	{
		cout<<"hello from operator ooooo  "<<endl;
	}
};

int main()
{
	Student a;
	
a.add();
a+4;
+a;	
}
