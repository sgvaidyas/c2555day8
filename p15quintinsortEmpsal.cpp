int main(){
	int n;
	cout<<"Enter n:\n";
	cin>>n;
	
	Employee emp[n];
	for (int i = 0; i < n; i++){
		emp[i].getdata();
	}
	cout<<"\nRecorded data:\n";
	for (int i = 0; i < n; i++){
		emp[i].display();
	}
	
	bool notSorted = true;
	Employee temp;
	while (notSorted){
		notSorted = false;
		for (int i=0; i<n-1; i++){
			if (emp[i].sal > emp[i + 1].sal){
				notSorted = true;
				temp = emp[i];
				emp[i] = emp[i + 1];
				emp[i + 1] = temp;
			}
		}
	}
	
	cout<<"\nSorted data:\n";
	for (int i = 0; i < n; i++){
		emp[i].display();
	}
}

