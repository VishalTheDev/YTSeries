#include <iostream>
using namespace std;

int main() {
    //for loop

    // int n = 10;
    // int evenSum = 0;

    // for(int i=1; i<=n; i++) {
    //     if(i%2 == 0) {
    //         evenSum += i;
    //     }
    // }
    // cout << "evenSum = " << evenSum << endl;

    //while loop

    int n = 10;
    int evenSum = 0;
    int i = 1;

    while(i <= n) {
        if(i%2 == 0) {
            evenSum += i;
        }
        i++;
    }
    cout << "evenSum = " << evenSum << endl;
    return 0;
}