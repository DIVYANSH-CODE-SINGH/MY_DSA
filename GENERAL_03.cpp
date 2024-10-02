#include <iostream>
using namespace std;

int main() {
   int arr[] = {0, 1, 0, 0, 0, 1, 0, 1, 0, 1, 1, 0, 0};
   int size = sizeof(arr) / sizeof(int);
   cout<<"array before operation:"<<endl;
   for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
   }
   for(int i=0;i<size;i++){
    if(arr[i]==0){
        arr[i]=1;
    }else{
        arr[i]=0;
    }
   }
   cout<<endl;
   cout<<"array after operation:"<<endl;
   for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
   }
    return 0;
    fflush(stdin); 
}