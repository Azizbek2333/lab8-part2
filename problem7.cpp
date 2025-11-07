#include <iostream>
using namespace std;

int countAuthentic(string s) {
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            count++;
        }
    }
    return count;
}

int main() {
    string s;
    cout << "Enter string: ";
    getline(cin, s);

    cout << "Number of authentic characters: " << countAuthentic(s) << endl;

    return 0;
}
