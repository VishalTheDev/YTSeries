#include <iostream>
using namespace std;

int main() {
    int n = 4;
    //print number
    // for(int i=1; i<=n; i++) {
    //     for(int j=1; j<=n; j++) {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // print star

    // for(int i=0; i<=n-1; i++) {
    //     for(int j=0; j<=n-1; j++) {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // print character

    // for(int i=0; i<n; i++) {  // outer
    //     char ch = 'A';
    //     for(int j=0; j<n; j++) {  // inner start -> new line start
    //         cout << ch;
    //         ch = ch + 1;
    //     }
    //     cout << endl;
    // }

    // print counting

    int num = 1;
    for(int i=0; i<n; i++) {
           for(int j=0; j<n; j++) {
            cout << num << " ";
            num++;
           }
           cout << endl;
    }
    return 0;
}