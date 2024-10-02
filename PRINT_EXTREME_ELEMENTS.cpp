#include <iostream>
using namespace std;

int main() {
   int arr[]={10,20,30,40,50,60,70};
   int size=sizeof(arr)/sizeof(int);
   int i=0;
   int j=size-1;
   while(j>=i){
 if(i==j){
        cout<<arr[i];
        i++;
    }else{
     cout<<arr[i]<<" "<<arr[j]<<" ";
     i++;
     j--;
       }
   } 

    return 0;
    fflush(stdin); 
}