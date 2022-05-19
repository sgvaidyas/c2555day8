#include <iostream>
using namespace std;

void fun(int *a)
{
	*a = *a + 100;
	
	cout<<"\nin fun val = "<<*a;
}
int main()
{
	int val =10; // 100
	
	cout<<"in main before function call val = "<<val;
	fun(&val);//100
	
	cout<<"\nin main after function call val = "<<val;
}
