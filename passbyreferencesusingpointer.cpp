#include <iostream>
#include <vector>
using namespace std;

    void changeA(int *ptr) {
        *ptr = 20;
    }

    int main() {
      int a = 10;
      cout << "Before: " << a << endl;
      changeA(&a);
      cout << "After: " << a << endl;
    return 0;
}