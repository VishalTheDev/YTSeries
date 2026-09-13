#include <iostream>
using namespace std;

// using output

// int sum(int a, int b) {
//     int s = a + b;
//     return s;
// }

// int main() {
//     cout << sum(10, 5) << endl;
//     return 0;
// }

// then input

int main() {
    int a, b;
    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    int sum = a + b;
    cout << "sum = " << sum << endl;
    return 0;
}