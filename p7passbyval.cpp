#include <iostream>
using namespace std;

void fun(int val)
{
	val = val + 100;
	
	cout<<"\nin fun val = "<<val;
}
int main()
{
	int val =10;
	
	cout<<"in main before function call val = "<<val;
	fun(val);
	
	cout<<"\nin main after function call val = "<<val;
}
