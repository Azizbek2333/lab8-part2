#include <iostream>
using namespace std;
string reverse(string s) {
    int start=0, end=s.length()-1;
    for (int i=0;i<(s.length())/2;i++)
        swap(s[i], s[end-i]);
    return s;
}
int main() {
    string s;
    char k;
    cout << "Input s=";
    getline(cin, s);
    cout << reverse(s) << endl;

    return 0;
}
