//
// Created by 方 on 2024/1/14.
//
#include <vector>
#include <iostream>
#include <unordered_set>
#include <algorithm>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> mp;
        //插入无序集合，去重
        for(auto a : nums) {
            mp.insert(a);
        }
        int ans = 0;
        //遍历这个集合
        for(auto a : mp) {
            if (!mp.count(a - 1)) {   //集合中没有比当前元素值小1的，找当前集合中连续的最小的那一个，也就是说 a是当前连续的头
                int n = a;               //把a记下来
                int res = 1;             //至少一个
                while(mp.count(n + 1)) {  //查找集合中若有a+1
                    n += 1;
                    res += 1;
                }
                ans = max(ans, res);
            }

        }
        return ans;
    }
};

int main() {
    vector<int> nums{0,1,2,5,6,7,8,9,10};
    int l = Solution().longestConsecutive(nums);
    std::cout << l << std::endl;
    return 0;
}