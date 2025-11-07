#include <iostream>
#include <cctype>
using namespace std;

char to_lower(const char s) {
    if (s >= 'A' && s <= 'Z')
        return s + 32;
    return s;
}
void countChar(const char* str, int& vowelCount, int& consonantCount) {
    vowelCount = 0;
    consonantCount = 0;

    while (*str != '\0') {
        char ch = to_lower(*str);
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowelCount++;
            else
                consonantCount++;
        }
        str++; // move pointer to next character
    }
}
int main() {
    char s[1000];
    int vowels = 0, consonants = 0;

    cout << "Enter a string: ";
    cin.getline(s, 1000);

    countChar(s, vowels, consonants);

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;

    return 0;
}
