#include <iostream>

using namespace std;
int main() {
    int a, b;
    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    int modulo = a % b;
    cout << "modulo = " << modulo << endl;
    return 0;
}