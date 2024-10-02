#include <iostream>
using namespace std;

int main() {
    int arr[] = {0, 1, 1, 1, 0, 0, 1, 1, 0, 1, 0, 1, 1, 0};
    int size = sizeof(arr) / sizeof(int);
    int count1 = 0;
    int count0 = 0;
    
    for(int i = 0; i < size; i++) {
        if(arr[i] == 0) {
            count0++;
        } else{
            count1++;
        }
    }

    cout << "Total number of zeros in the array are: " << count0 << endl;
    cout << "Total number of ones in the array are: " << count1 << endl;
    
    return 0;
}
