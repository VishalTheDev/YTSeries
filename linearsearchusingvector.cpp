#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int> v, int target) {
    for(int i=0; i<v.size(); i++) {
        if(v[i] == target) {
            return i;
        }
    }
    return -1;
}
int main() {
     vector<int> v = {10, 20, 30, 40, 50};
     int target = 40;
     cout << linearSearch(v, target);
    return 0;
}