//
// Created by 方 on 2024/2/3.
//
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> left;
        vector<int> right = nums;
        vector<int> res;
        int left_sum = 1;
        int right_sum = 1;

        for(int i = 0; i < nums.size(); i++){
            left_sum = left_sum * nums[i];
            left.push_back(left_sum);
        }
        for(int j = nums.size() - 1; j >= 0; j--){
            right_sum = right_sum * nums[j];
            right[j] = right_sum;
        }

        for(int x = 0; x < nums.size(); x++){
            if(x == 0){
                res.push_back(right[x+1]);
            }else if(x == nums.size() - 1){
                res.push_back(left[x-1]);
            }else {
                int ret = left[x-1] * right[x+1];
                res.push_back(ret);
            }
        }
        return res;
    }
};

int main() {
    vector<int> nums{1,2,3,4};
    Solution().productExceptSelf(nums);
    return 0;
}