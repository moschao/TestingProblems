//
// Created by 方 on 2024/2/3.
//

#include <vector>
using namespace std;
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for(int i=0;i<nums.size();++i) {
            int t = nums[i];
            if(i+1!=t) {
                nums[i] = 0;
                while(t) {
                    int q = nums[t-1];
                    if(q==t) {
                        return t;
                    }
                    nums[t-1]=t;
                    t=q;
                }
            }
        }
        return -1;
    }
};