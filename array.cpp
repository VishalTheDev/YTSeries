#include <iostream>
 using namespace std;

//  int main() {
//     int size = 5;
//     int marks[size];

//     for(int i=0; i<size; i++) {
//         cin >> marks[i];
//     }

    //loops : 0 to size-1

    // for(int i=0; i<size; i++) {
    //     cout << marks[i] << endl;
    // }

    // cout << marks[0] << endl;
    // cout << marks[1] << endl;
    // cout << marks[2] << endl;
    // cout << marks[3] << endl;
    // cout << marks[4] << endl;

    // linear search

    int linearSearch(int arr[], int sz, int target) {
        for(int i=0; i<sz; i++) {
            if(arr[i] == target) { //found
                return i;
            }  
        }
        return -1; //not found
    }

    void reverseArray(int arr[], int sz) {
        int start = 0, end = sz-1;
        while(start < end) {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
    int main() {
        int arr[] = {4, 2, 7, 8, 1, 2, 5};
        int sz = 7;

        reverseArray(arr, sz);

        for(int i=0; i<sz; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    return 0;
 }