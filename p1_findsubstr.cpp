#include<iostream>
#include<cstring>
using namespace std;

void find_substr(string s, string substr, int n,int count){
	if(s[n] == substr[0]){
		for(int i = n+1; i <= n + substr.length();i++){
			if(s[i] != substr[i-n]){
				break;
			}
			if(i - n ==substr.length()-1){
				count++;
			}
		}		
	}
	if(s[n+substr.length()-1]=='\0'){
		if(count ==0){
		cout<<"no occurences of substring";
		}else{
			cout<<count<<" occurences of substring";
		}
		return;
	}
	find_substr(s,substr,++n,count);
}
int main(){
	cout<<("Enter string");
	string s;
	getline(cin, s);
	cout<<("Enter substring");
	string substr;
	getline(cin,substr);
	find_substr(s,substr,0,0);	
}

