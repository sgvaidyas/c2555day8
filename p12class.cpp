#include<iostream>
using namespace std;
class Employee
{
	int id;
	string name;
	float sal;
	
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
	Employee emp;
	
	emp.getdata();
	cout<<emp.id;
	emp.display();
}

