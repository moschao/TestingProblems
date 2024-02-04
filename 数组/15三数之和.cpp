//
// Created by 方 on 2024/2/4.
//
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        for(int i = 0; i < nums.size() -2; i++){
            for(int j = i +1; j < nums.size() -1; j++){
                for(int k = j +1; k < nums.size(); k++){
                    int temp = nums[i] + nums[j] +nums[k];
                    if(temp == 0){
                        res.push_back({nums[i], nums[j], nums[k]});
                    }
                }
            }
        }

        return res;
    }
};

int main() {
    vector<int> nums{-1, 0, 1, 2, -1,-4};
    Solution().threeSum(nums);
    return 0;
}