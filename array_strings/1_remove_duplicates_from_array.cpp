#include<bits/stdc++.h>

using namespace std;

int removeDuplicates(vector<int> &arr){
    int idx = 0;
    arr[idx++] = arr[0];
    for(int i=1; i<arr.size();i++){
        if(arr[i] != arr[i-1]){
            arr[idx++] = arr[i];
        }
    }
    return idx;
}

int main(){
    vector<int> nums = {1, 3, 5, 5, 5, 6, 7, 8};
    int res = removeDuplicates(nums);
    cout << res;

    return 0;
}
