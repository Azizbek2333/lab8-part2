#include <iostream>
using namespace std;
bool isAnagram(string s, string t) {
    if (s.length() != t.length())
        return false;   
    int countS[26] = {0};
    int countT[26] = {0};
  
    for (int i = 0; i < s.length(); i++) {
        countS[s[i] - 'a']++;
        countT[t[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
        if (countS[i] != countT[i])
            return false;
    }
    return true;
}
int main() {
    string s, t;
    cout << "Input first string (s): ";
    getline(cin, s);
    cout << "Input second string (t): ";
    getline(cin, t);
    if (isAnagram(s, t))
        cout << "Anagram" << endl;
    else
        cout << "Not Anagram" << endl;
    return 0;
}
