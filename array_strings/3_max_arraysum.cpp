#include<bits/stdc++.h>

using namespace std;

int maxSum(vector<int> &nums){
    int maxSum = INT_MIN;
    int currSum = 0;

    for(int i=0; i<nums.size(); i++){
        currSum += nums[i];
        if(currSum > maxSum){
            maxSum = currSum;
        }
        if(currSum < 0){
            currSum = 0;
        }
    }
    return maxSum;
}

int main(){
    vector<int> nums = {-1,-2,1,2,3,-5,4,5};
    int res = maxSum(nums);
    cout << "Max sum = " << res;
    return 0;
}
