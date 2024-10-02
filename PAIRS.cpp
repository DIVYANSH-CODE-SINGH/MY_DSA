#include <iostream>
using namespace std;
pair<int,int> checkTwoSum(int arr[], int n, int target) {
    //assuming (-1,-1) as no answer found
    pair<int,int> ans = make_pair(-1,-1);
    //check all pairs
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(arr[i] + arr[j] == target) {
                //found a pair that sums to target
                ans.first = arr[i];
                ans.second = arr[j];
                return ans;
            }
        }
    }
    //agar aap yha tak pohoch gye
    //iska matlab, koi bhi pair target k equal nahi mila
    //iska matlab return false karo
    return ans;
}
int main() {
    
       
    return 0;
    fflush(stdin); 
}