#include <iostream>
#include <string>

using namespace std;
int countSubStr(string text, string substring, int i = 0) {
    if (text[i] == '\0') {
        return 0;
    }
    int count = 0;
    for (int j = 0; substring[j] != '\0'; j++) {
        if (substring[j] != text[i + j]) {
            break;
        }
        count = 1;
        i=i+substring.length()-1;
    }
    return count += countSubStr(text, substring, i + 1);
}
int main()
{
    string text, substr;
    cout << "Enter a string\n";
    getline(cin, text);
    cout << "Enter substring to find\n";
    getline(cin, substr);
    cout << countSubStr(text, substr);
    return 0;
}

