//
// Created by 方 on 2024/2/2.
//

#include <vector>
#include <deque>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        //次解法超出时间限制

        /*vector<int> res;
        int left = 0;
        int right = k-1;
        while(right < nums.size()){
            vector<int> temp = nums;
            sort(temp.begin()+left, temp.begin()+right+1);
            res.push_back(temp[right]);

            left++;
            right++;
        }

        return res;*/

        //单调队列的解法
        vector<int> res;
        deque<int> idxQue;   //单调队列
        for(int i = 0; i < nums.size(); i++) {
            //依次的加入数组的元素到队列中，队列头就是区间最大的元素
            //注意，队列存储的是索引，方便区分队列元素的距离都在k以内

            while( !idxQue.empty() && i - idxQue.front() >= k ) {
                idxQue.pop_front(); //弹出队列头，保证整个队列只有K个元素
            }
            //队列不空，且当前元素>=队尾元素，弹出队尾元素
            while(!idxQue.empty() && nums[idxQue.back()] <= nums[i]) {
                idxQue.pop_back();
            }
            idxQue.push_back(i); //当前元素入队

            if(i >= k - 1) {  //可以保存队列头元素
                res.push_back(nums[idxQue.front()]);
            }
        }
        return res;
    }
};