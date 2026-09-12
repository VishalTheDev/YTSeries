#include <iostream>
using namespace std;

int main() {

    int num;

    int a = 5;
    int b = 6;
     
    cout << "Enter your choice : ";
    cin >> num;

     switch(num) {

        case 1:
          cout << "Add = " << a + b ;
          break;

          case 2:
          cout << "Subtract = " << a - b;
          break;

          case 3:
          cout << "Multiply = " << a * b;
          break;

          case 4:
          cout << "Division = " << a / b;
          break;
           default:
           cout << "Invalid";
     }
    return 0;
}