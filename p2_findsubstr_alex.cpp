#include<iostream>
#include<fstream>


//GENERATED_OUTPUT


template<class T>
int sub_occurrences(T* src, int& n, T* occ, int& m, int i, int j)
{
	using namespace std;
	
	if (i >= n)
		return 0;

	if (src[i] == occ[j])
	{
		j++;
	}
	else
		j = 0;

	if (j >= m)
	{
		j = 0;
		return 1 + sub_occurrences(src, n,occ, m, i, j);
	}

	i++;

	return sub_occurrences(src, n,occ, m, i, j);
}

template<class T>
int get_size(T* src, T end_val)
	
{
	using namespace std;
	int i = 0;

	while (src[i] != end_val)
		i++;

	return i;
}
using namespace std;

int main()
{
	char arr[100];
	char sub[100];
	int occurances = 0;

	cout<<"MAIN ARRAY = ";
	cin.getline(arr, sizeof(arr));
	cout<<"SUB ARRAY = ";
	cin.getline(sub, sizeof(sub));

	int size = get_size(arr, '\0');
	int sub_size = get_size(sub, '\0');
	int i = 0;
	int j = 0;

	cout << sub_occurrences(arr, size, sub, sub_size, i, j) << "\n";
}

