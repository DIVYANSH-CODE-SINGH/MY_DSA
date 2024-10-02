#include<iostream>
using namespace std;
//passing an array to the function
void print_array(int brr[],int dize){ //receive name and size both
for(int i=0;i<dize;i++){  // you can even change the name of the array(arr --> brr) and the size(dize)
    cout<<brr[i]<<" ";
}
}

int main(){
 int arr[]={2,4,6,1,9};
 int size=5;
 print_array(arr,size); // name of the array , size of array
 cout<<"hello"<<endl; 
    return 0;
}