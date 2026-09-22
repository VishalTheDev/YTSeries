#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    int i = 0;
    int j = n - 1;

    while(i<j) {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    for(int k=0; k<n; k++) {
        cout << arr[k] << " ";
    }
    return 0;
}