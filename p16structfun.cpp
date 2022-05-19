#include<iostream>
using namespace std;
struct Student
{
	string name;
	int roll;
};
void getdata(Student *s)
{
	cout<<"\n Entre name and roll = ";
	cin>>s->name>>s->roll;
}
void display(Student s)
{
	cout<<"\n NAME = "<<s.name<<endl;
	cout<<"\n ROLL = "<<s.roll<<endl;	
}
int main()
{
	Student ob;	
	getdata(&ob);
	display(ob);
}


