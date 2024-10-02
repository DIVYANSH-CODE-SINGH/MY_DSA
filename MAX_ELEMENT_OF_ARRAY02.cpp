#include<iostream>
#include<climits>
using namespace std;
int main(){
    int crr[9]={38,29,89,47,28,112,46,76,90};
    int size=9;
    int max_element=crr[0];
    for(int i=0;i<size;i++){
        if(crr[i]>max_element){
            max_element=max(max_element,crr[i]);
        }
    }
    cout<<"the max valued element in the array is:"<<max_element<<endl;
    return 0;
}
