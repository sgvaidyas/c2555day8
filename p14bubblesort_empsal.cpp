#include<iostream>
using namespace std;

struct Employee{
	private:
	int id;
	string name;
	float salary;
	public:
	void setData(){
		cout << "\n Enter id, name and salary\n";
		cin >> id >> name >> salary;
	}
	
	void display(){
	cout << "\n EMPID = " << id ;
	cout << "\n EMPNAME = " << name ;
	cout << "\n EMPSALARY = " << salary ;
	}
	float getsal()
	{
		return salary;
	}
};

void bubbleSortEmp(Employee emp[], int size);

int main(){
	
	int n;
	cout << "\nEnter n\n";
	cin >> n;
	
	Employee emp[n];
	for(int i = 0; i < n; i++)
		emp[i].setData();
	
	cout << "\n Records \n";
	for(int i = 0; i < n; i++)
		emp[i].display();
		
	// sort by salary
	bubbleSortEmp(emp,n);
	
	cout << "\n Sorted \n";
	for(int i = 0; i < n; i++)
		emp[i].display();
		
}

void bubbleSortEmp(Employee emp[], int size){
	
	int i, j;
	Employee temp;
	
	for(i = 0; i < size -1; i++){
		for(j = 0; j < size-1-i; j++){
			if(emp[j].getsal() > emp[j+1].getsal()){
				temp = emp[j];
				emp[j] = emp[j+1];
				emp[j+1] = temp;
			}
		}
	}
}
