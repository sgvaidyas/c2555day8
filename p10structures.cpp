#include<iostream>
using namespace std;
struct Employee
{
	private:
	int id;
	string name;
	float sal;
	
	public:	
	void getdata()
	{
		cout<<"\n Enter id,name and sal ";
		cin>>id>>name>>sal;
	}
	void display()
	{
		cout<<"\n EMPID  = "<<id<<endl;
		cout<<"\n EMPNAME  = "<<name<<endl;
		cout<<"\n EMPSAL  = "<<sal<<endl;
	}
};
int main()
{
	newEmp emp;
	
	emp.getdata();
	emp.data = 88;
	cout<<"Emp data = "<<emp.data;
	emp.display();
}

