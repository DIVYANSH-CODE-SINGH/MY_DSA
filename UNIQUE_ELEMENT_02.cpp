#include <iostream>
using namespace std;

int main() {
   int arr[] = {10, 12, 19, 19, 12, 11, 10, 8, 11, 8, 6, 6, 0};
   int size = sizeof(arr) / sizeof(int);
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }

    cout<<"the unique element in the array is:"<<ans<<endl;
    return 0;
    fflush(stdin); 
    /* #include <iostream>
using namespace std;

int main() {
   int arr[] = {10, 12, 19, 19, 12, 11, 10, 8, 11, 8, 6, 6, 0};
   int size = sizeof(arr) / sizeof(int);
   int ans = 0;
   bool containsZero = false;

   // XOR all elements
   for (int i = 0; i < size; i++) {
       ans = ans ^ arr[i];
       if (arr[i] == 0) {
           containsZero = true;
       }
   }

   // Check if the result is 0 and clarify whether 0 is the unique element
   if (ans == 0 && containsZero) {
       cout << "The unique element in the array is: 0" << endl;
   } else if (ans != 0) {
       cout << "The unique element in the array is: " << ans << endl;
   } else {
       cout << "There is no unique element in the array." << endl;
   }

   return 0;
}
*/
}