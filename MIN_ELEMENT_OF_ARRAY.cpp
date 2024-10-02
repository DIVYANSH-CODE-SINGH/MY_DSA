#include<iostream>
#include<climits>
using namespace std;
int main(){
    int crr[9]={-38,-29,-89,-10,-28,-112,-46,-76,-90};
    int size=9;
    int min_element=crr[0];
   for(int i=0;i<size;i++){
    if(crr[i]<min_element){
     min_element=crr[i];
    }
   }
    cout<<"the minimun valued element in the array is:"<<min_element<<endl;
    return 0;
}
