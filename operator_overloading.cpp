#include<iostream>
using namespace std;
class Student
{
	public :
	void add()
	{
		cout<<"hello";
	}
	void operator+()
	{
		cout<<"hello from operator";
	}
};

int main()
{
	Student a;
	
a.add();
+a;	
}
