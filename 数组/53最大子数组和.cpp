//
// Created by 方 on 2024/2/3.
//
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //滑动窗口
        int minx = INT_MIN;
        int left = 0;
        int right = 0;
        int res = 0;
        int temp = INT_MIN;   //暂存加之前的状态

        while(left <= right && right < nums.size()){
            res = res + nums[right];
            //先加，再更新
            minx = max(res, minx);
            if(res > temp){
                right++;
                temp = res;
            }else{
                left++;
                right++;
                temp = res;
                res = res - nums[left];
            }
        }
        return res;
    }
};

int main() {
    vector<int> nums{-2,1,-3,4,-1,2,1,-5,4};
    int res = Solution().maxSubArray(nums);
    cout << res << endl;
    return 0;
}