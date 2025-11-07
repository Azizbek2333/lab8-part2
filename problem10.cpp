#include <iostream>
using namespace std;
int romanCharToInt(char ch) {
    switch (ch) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}
int romanToInt(string s) {
    int result = 0;
    for (int i = 0; i < s.length(); i++) {
        int curr = romanCharToInt(s[i]);
        int next = 0;
        if (i + 1 < s.length()) {
            next = romanCharToInt(s[i + 1]);
        }
        if (curr < next)
            result -= curr;  
        else
            result += curr; 
    }
    return result;
}
int main() {
    string roman;
    cout << "Enter Roman number: ";
    cin >> roman;
    cout << "Integer value: " << romanToInt(roman) << endl;
    return 0;
}
