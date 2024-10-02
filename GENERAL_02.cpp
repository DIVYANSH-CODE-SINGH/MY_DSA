#include <iostream>
using namespace std;

int main() {
  int arr[] = {0, 1, 0, 2, 0, 1, 2, 1, 0, 1, 1, 0, 0,2};
   int size = sizeof(arr) / sizeof(int);
   for(int i=0;i<size;i++){
    for(int j=i+1;j<size;j++){
        if(arr[i]>arr[j]){
            int tempo=arr[i];
            arr[i]=arr[j];
            arr[j]=tempo;
        }
    }
   }
   for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
   }
    return 0;
    fflush(stdin); 
}