#include<iostream>
using namespace std;
int main(){
   int crr[4]={2,4,2,5};
   fill(crr,crr+4,23);
   for(int i=0;i<4;i++){
    cout<<crr[i]<<endl;
   }
   cout<<endl;
    int drr[4]; //you don't need to initialize the array,decleration in enough
   fill(drr,drr+4,123);
   for(int i=0;i<4;i++){
    cout<<drr[i]<<endl;
   }
  cout<<endl;
    int arr[4]; 
   fill(arr,arr+2,123);
   for(int i=0;i<4;i++){
    cout<<arr[i]<<endl;
   }
    return 0;
}