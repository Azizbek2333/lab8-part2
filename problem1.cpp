#include <iostream>
using namespace std;
void search(string& s, char& key) {
    bool b=false;
    for (int i=0; i<s.length(); i++) {
        if (s[i]==key) {
            b = true;
            break;
        }
    }
    if (b)
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;
}
int main() {
    string s;
    char k;

    cout << "Input s=";
    getline(cin, s);


    cout << "Input key: ";
    cin >> k;

    search(s,k);

    return 0;
}
