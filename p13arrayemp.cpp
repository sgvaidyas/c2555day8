#include<iostream>
using namespace std;
struct Employee
{
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
	int n;
	cout<<"\n Enter n = ";
	cin>>n;
	
	Employee emp[n],x;	
	cout<<sizeof(x);
	for(int i=0;i<n;i++)
	{
		emp[i].getdata();
	}
	cout<<"\n Records =  \n";	
	for(int i=0;i<n;i++)
	{
		emp[i].display();
	}	
}

