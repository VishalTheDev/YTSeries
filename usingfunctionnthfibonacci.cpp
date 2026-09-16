#include <iostream>
using namespace std;

int fibonacci(int n) {
    int a = 0;
    int b = 1;

    for(int i=0; i<n; i++) {
        int c = a + b;
        a = b;
        b = c;
    }
    return a;
}
int main() {
    int n = 6;
     cout << fibonacci(n) << endl;

    return 0;
}