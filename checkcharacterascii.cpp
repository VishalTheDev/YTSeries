#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter char: ";
    cin >> ch;

    if(ch >= 65 && ch <= 90) { // use of implicit type conversion
        cout << "uppercase\n";
    } else {
        cout << "lowercase\n";
    }
    return 0;
}