#include <iostream>
using namespace std;

int main() {
    int x = 0;
    int n;
    string s;
    cout << "Enter number of operations: ";
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        getline(cin, s);
        if (s == "X++" || s == "++X")
            x++;
        else if (s == "X--" || s == "--X")
            x--;
    }
  cout<<x<<endl;
    return 0;
}
