#include <iostream>
using namespace std;

     int sumofDigit(int num) {
        int digSum = 0;

        while(num > 0) {
            int lastDig = num % 10;
            digSum += lastDig;
            num = num / 10;
        }
        return digSum;
     }
int main() {
    cout << "sum = " << sumofDigit(2346) << endl;
    return 0;
}