#include <iostream>
#include <string>

using namespace std;

bool checkForSubstring(string s, string substr, int s_index, int substr_index) {
    if (substr_index == substr.length())
    {
        return true;
    } else if (s[s_index] == substr[substr_index]) {
        return checkForSubstring(s, substr, s_index + 1, substr_index + 1);
    }
    return false;
}

// return count of substr in s
int substringSearch(string s, string substr, int index) 
{
    if (index - s.length() <= substr.length() || index >= s.length() || substr.empty()) 
    {
        return 0;
    }
    else if (s[index] == substr[0]) {
        if (checkForSubstring(s, substr, index, 0)) {
            return substringSearch(s, substr, index + 1) + 1;
        } else {
            return substringSearch(s, substr, index + 1);
        }
    }
    return substringSearch(s, substr, index + 1);
}

int main() 
{
    string s;
    string substr;
    cout << "Please enter the string: ";
    getline(cin, s);
    cout << "Please enter the search string: ";
    getline(cin, substr);

    // cout << s << " " << substr << endl;

    cout << "The substring '" << substr << "' appears " << substringSearch(s, substr, 0) << " times in string '" << s << "'." << endl;;
}



