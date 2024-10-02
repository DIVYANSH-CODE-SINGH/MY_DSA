#include <iostream>
using namespace std;
// find the only unique element in the array;
int main() {
   int arr[] = {10, 12, 19, 19, 12, 11, 10, 8, 11, 8, 6, 6, 7};
   int size = sizeof(arr) / sizeof(int);
   int uniqueElement = -1;

   for (int i = 0; i < size; i++) {
       bool isUnique = true;
       for (int j = 0; j < size; j++) {
           if (i != j && arr[i] == arr[j]) {
               isUnique = false;
               break;
           }
       }
       if (isUnique) {
           uniqueElement = arr[i];
           break;
       }
   }

   if (uniqueElement != -1) {
       cout << "The first unique element in the array is: " << uniqueElement << endl;
   } else {
       cout << "No unique element found." << endl;
   }

   return 0;
}
