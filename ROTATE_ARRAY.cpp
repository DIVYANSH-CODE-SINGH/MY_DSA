#include <iostream>
using namespace std;

int main() {
   int arr[]={1,2,3,4,5,6,8,9};
   int size=sizeof(arr)/sizeof(int);
   int n;
   cout<<"enter how many number you want to shift"<<endl;
   cin>>n;
   int i=0;
   int j=size-1;
   while(j>i){
    int tempo=arr[i];
    arr[i]=arr[j];
    arr[j]=tempo;
      i++;
    j--;
   }

int k=n;
int l=size-1;
 while(l>k){
    int tempo=arr[k];
    arr[k]=arr[l];
    arr[l]=tempo;
     k++;
    l--;
   }

   for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
   }
    return 0;
    fflush(stdin); 
}