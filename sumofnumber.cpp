#include <iostream>
using namespace std;

int main() {
    int n = 50;
    int sum = 0;

    //while loop
    // int i = 1;

    // while(i <= n) {
    //     sum +=i;
    //     i++;
    // }
    // cout << "sum = " << sum << endl;

    //for loop

    for(int i=1; i<=n; i++) {
        sum += i;
        if(i == 5) {
            break;
        }
    }
    cout << "sum = " << sum << endl;
    return 0;
}