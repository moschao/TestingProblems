//
// Created by 方 on 2024/2/3.
//

#include <vector>
using namespace std;
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int temp = 0;
        for(int i = 0; i < k; i++){
            for(int j = nums.size() -2; j >= 0; j--){
                temp = nums[nums.size() - 1];
                nums[j+1] = nums[j];
            }
            nums[0] = temp;
        }
    }
};

int main() {
    vector<int> res{1,2,3,4,5,6,7};
    Solution().rotate(res, 3);
    return 0;
}