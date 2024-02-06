//
// Created by 方 on 2024/2/5.
//

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        if (nums.size() <= 1) {
            return nums.size();
        }
        int res = 1;
        vector<int> dp(nums.size(), 1);
        for (int i = 1; i < nums.size(); ++i) {
            for (int j = 0; j < i; j++) {
                if (nums[j] < nums[i]) {
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
            // 最长递增子序列并不是一定要以nums[nusm.size() - 1]结尾，可能是一个中间值
            res = max(dp[i], res);
        }
        return res;
    }
};
