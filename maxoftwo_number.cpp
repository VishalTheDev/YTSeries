#include <iostream>
using namespace std;

int maxoftwo(int a, int b) {
    if(a > b) {
        return a;
    } else {
        return b;
    }
}
int main() {
    cout << "max = " << maxoftwo(20, 10) << endl;
    return 0;
}