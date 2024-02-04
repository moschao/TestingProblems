//
// Created by 方 on 2024/2/3.
//

#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> res;
        for(int i = 0; i < nums.size(); i++){
            res[i]++;
        }
        for(auto& x : res){
            if(x.second > (nums.size()/2 )){
                return x.first;
            }
        }

        return -1;
    }
};

int main() {
    vector<int> nums{2,2,1,1,1,2,2};
    Solution().majorityElement(nums);
    return 0;
}