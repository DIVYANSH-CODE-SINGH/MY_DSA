#include <iostream>
using namespace std;

int main() {
    int arr[]={10,5,20,15,30};;
  int size = sizeof(arr) / sizeof(int);
 int target=35;
  for(int i=0;i<size;i++){
    for(int j=0;j<size;j++){
if(arr[i]+arr[j]==target){
    cout<<"("<<arr[i]<<","<<arr[j]<<")";
}
    }
    cout<<endl;
  }
    return 0;
    fflush(stdin); 
}