#include <iostream>

using namespace std;
int main() {
    int a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    if(a > b) {
        cout << "Maximum = " << a;
    } else {
        cout << "Maximum = " << b;
    }
    
    return 0;
}