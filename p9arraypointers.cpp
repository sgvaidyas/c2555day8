#include <iostream>
using namespace std;
int main()
{
	int a[] = {11,22,33,44,55};
	int size = sizeof(a)/sizeof(a[0]);
	int *p;
	p = &a[0];	
	cout<<"\nsize of p = "<<sizeof(p)<<endl;	
	
	int (*b)[5];
	b=&a;	
	cout<<"\nsize of b = "<<sizeof(b)<<"b="<<b<<" b+1 =  "<<b+1<<endl;	
	
	cout<<" &a[0] = "<<&a[0]<<" a = "<<a<<endl;	
	cout<<"p = "<<p<<" *p = "<<*p<<endl;
	cout<<"(p+1) = "<<(p+1)<<" *(p+1) = "<<*(p+1)<<endl;
	
	cout<<"\n array ele = \n";
	for(int i=0;i<size;i++)
		cout<<"(p+i) = "<<(p+i)<<"*(p+i) = "<< *(p+i)<<endl;
		
	cout<<"\n altered array ele = \n";
	for(int i=0;i<size;i++)
	{
		cout<<"*p+i = "<< *p+i<<endl;
		*p = *p+i;
	}
	cout<<"\n array ele = \n";
	for(int i=0;i<size;i++)
		cout<<"(p+i) = "<<(p+i)<<"*(p+i) = "<< *(p+i)<<endl;	
}
