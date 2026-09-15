#include <iostream>
using namespace std;

int main() {
    int n = 4;

    //upper half
    for(int i=1; i<=n; i++) {
        //left star
        for(int j=1; j<=i; j++) {
            cout << "*";
        }
        //spaces
        for(int j=1; j<=2*(n-i); j++) {
            cout << " ";
        }
        //right star
        for(int j=1; j<=i; j++) {
            cout << "*";
        }
        cout << endl;
    }

      //lower half
      for(int i=n; i>=1; i--) {
        //left star
        for(int j=1; j<=i; j++) {
            cout << "*";
        }
        //spaces
        for(int j=1; j<=2*(n-i); j++) {
            cout << " ";
        }
        //right star
        for(int j=1; j<=i; j++) {
            cout << "*";
        }
        cout << endl;
    }
      return 0;
      }