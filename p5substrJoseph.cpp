#include <iostream>
using namespace std;

void check(string s ,string subs,int &counter) {

    if (subs.empty()) {
        counter++;
        return;

    }

    if (s[0] == subs[0])
        check(s.erase(0, 1), subs.erase(0, 1), counter);
}


void findStr(string s ,const string& subs, int &counter){
    if(!s.empty()) {
        check(s, subs, counter);

        findStr(s.erase(0, 1), subs, counter);
    }
    }
int main() {
    int count=0;
    string s,sub;

    cout <<"enter string"<<endl;
    cin>>s;
    cout<<"enter sub string"<<endl;
    cin>>sub;
    findStr(s,sub,count);
    cout<<count;
}






