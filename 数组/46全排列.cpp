//
// Created by 方 on 2024/2/6.
//

//全排列

#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    void dfs(vector<int>& nums, int x) {  //x用于记录是否到最后
        if(x == nums.size()-1) {
            ret.push_back(nums);  //添加排列方案
            return ;
        }

        for(int i = x; i < nums.size(); i++ ) {
            swap(nums[i], nums[x]);   //交换 nums[i]固定在第x位
            dfs(nums, x+1);                    //固定第x+1位元素
            swap(nums[i], nums[x]);   //恢复交换
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        dfs(nums, 0);
        return ret;
    }

public:
    vector<vector<int>> ret;
};

int main() {
    vector<int>nums{1,2,3};
    Solution().permute(nums);
    return 0;
}