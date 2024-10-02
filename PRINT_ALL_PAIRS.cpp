#include <iostream>
using namespace std;

int main() {
 int arr[]={10,20,30,40};;
  int size = sizeof(arr) / sizeof(int);
  cout<<"posiible pairs of the array are:"<<endl;
  for(int i=0;i<size;i++){
    for(int j=0;j<size;j++){
        cout<<"("<<arr[i]<<","<<arr[j]<<")";
    }
    cout<<endl;
  }
    return 0;
    fflush(stdin); 
}