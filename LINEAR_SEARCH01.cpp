#include<iostream>
using namespace std;
int find_target(int arr[],int dize,int market){
    for(int i=dize-1;i>=0;i--){
        if(arr[i]==market){
            return i;
        }
    }
     return 2;
}
int main(){
 int brr[7]={73,29,28,10,48,78,23};
 int target=10;
 int size=7;
 int hello=find_target(brr,size,target);
if(hello!=2){
    cout<<"target is found and the index of the target is "
    <<hello<<" or it's at position "<<hello+1<<endl;
}else{
     cout<<"target is not found."<<endl;
}
    return 0;
}