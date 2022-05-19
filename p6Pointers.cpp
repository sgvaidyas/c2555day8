#include <iostream>
using namespace std;


int main()
{
	int x=10;
	
	int *p,**q,***r;
	
	p = &x;
	q = &p;
	r = &q;	
	cout<<"\n x = "<<x<< " &x =  "<<&x<<endl;
	cout<<"\n p = "<<p<< " &p =  "<<&p<< " *p =  "<<*p<<endl;
	cout<<"\n q = "<<q<< " &q =  "<<&q<< " *q =  "<<*q<< " **q =  "<<**q<<endl;
	cout<<"\n r = "<<r<< " &r =  "<<&r<< " *r =  "<<*r<< " **r =  "<<**r;
	cout<<" ***r =  "<<***r<<endl;
}
