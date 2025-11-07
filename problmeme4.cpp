
#include <iostream>
using namespace std;
string Palindrome(string s) {
    int start=0, end=s.length()-1;
    for (int i=0;i<(s.length())/2;i++)
        swap(s[i], s[end-i]);
    return s;
}
int main() {
    string s;
    bool u=true;
    cout << "Input s=";
    getline(cin, s);
    string b = Palindrome(s);
    for (int i = 0; i<b.length(); i++) {
        if (s[i]!=b[i]) {
            u = false;
            break;
        }
    }

    cout << boolalpha << u << endl;
    return 0;
}


