#include <iostream>
#include<algorithm>
using namespace std;

int main() {
   int arr[] = {0, 1, 0, 0, 0, 1, 0, 1, 0, 1, 1, 0, 0};
   int size = sizeof(arr) / sizeof(int);
   cout<<"array before operation:"<<endl;
   for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
   }
  int count1=0;
  int count0=0;
  for(int i=0;i<size;i++){
    if(arr[i]==0){
        count0++;
    }else{
        count1++;
    }
  }
   cout<<endl;
  cout<<"the no of zeros in the array are:"<<count0<<endl;
    cout<<"the no of ones in the array are:"<<count1<<endl;
    cout<<endl;
    fill(arr,arr+8,0);
      fill(arr+8,arr+size,1);
      
   cout<<"array after operation:"<<endl;
   for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
   }
    return 0;
    fflush(stdin); 
}