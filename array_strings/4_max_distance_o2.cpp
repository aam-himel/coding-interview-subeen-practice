#include<bits/stdc++.h>

using namespace std;

int maxDistance(vector<int> &nums){
    int resMax = INT_MIN;
    for(int i=0; i<nums.size(); i++){
        for(int j = 0; i<nums.size();j++){
            if((nums[j] - nums[i]) > resMax)
                resMax = nums[j] - nums[i];
        }
    }
    return resMax;
}

int main(){
     ios_base::sync_with_stdio(0);
     cin.tie(0);

     vector<int> nums = {3, 5, 4, 2};
     int res = maxDistance(nums);
     cout << "max = " << res;

    return 0;
}
