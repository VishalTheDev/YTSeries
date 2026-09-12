#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    if(n == 0) {
        cout << 0;
        return 0;
    }

    if(n == 1) {
        cout << 1;
        return 0;
    }

    int first = 0;
    int second = 1;
    for(int i=2; i<=n; i++) {
        int third = first + second;
        first = second;
        second = third;
    }
    cout << second;
    return 0;
}