#include <iostream>
using namespace std;
int count(const string& s, char a) {
    int c=0;
    for (int i=0; i<s.length(); i++) {
        if (s[i]==a) {
            c++;
        }
    }
    return c;
}

int main(){
    char a;
    string s;
    cout << "Enter s: ";
    getline(cin, s);
    
    cout << "Enter character: ";
    cin >> a;
    cout << "Output: " << count(s,a);



    return 0;
}
