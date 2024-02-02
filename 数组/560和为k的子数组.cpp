//
// Created by 方 on 2024/2/2.
//

#include <unordered_map>
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        //解法1； 时间复杂度n的三次方
        /*int count = 0;
        for(int left = 0; left < nums.size(); left++){
            for(int right = left; right < nums.size(); right++){
                int sum = 0;
                for(int i = left; i <= right; i++){
                    sum = sum+nums[i];
                }
                if(sum == k){
                    count++;
                }
            }
        }

        return count;*/
        //暴力解，超时

        //解法2 时间复杂度 n的平方
        /*int count = 0;
        for(int left = 0; left < nums.size(); left++){
            int sum = 0;
            for(int right = left; right < nums.size(); right++){
                sum = sum + nums[right];
                if(sum == k){
                    count++;
                }
            }
        }

        return count;*/

        //解法3 前缀和
        /*int result = 0, preSumRight = 0;
        unordered_map<int, int> hashMap;
        // 为什么要有此初始化？
        // 主要是当数组只有一个元素时，历史前缀和数据(也就是hash表)是空的，因为还未来得及构建
        // 当数组中这个元素正好等于k时，需要hash表中保存的历史前缀和数据有一个key=0的数据
        // 如果数组中这个元素不等于k时，是不影响结果的
        hashMap[0] = 1;
        for (int i = 0; i < nums.size(); ++i) {
            // 算一下当前前缀和
            preSumRight += nums[i];

            // 下面是前缀和的理解核心：
            // 假设有一个区间[left, right], 该区间上元素和为k
            // 那么就有:
            // ([0,right]元素之和)  减去  ([0,left] 元素之和) 等于 (k)
            // 转换一下就是:
            // ([0,right]元素之和)  减去  (k)  等于  ([0,left] 元素之和)

            // ([0,right]元素之和) 就是
            //      每次循环时立刻就能算出来的当前前缀和，姑且叫为 preSumRight
            // ([0,left] 元素之和) 就是
            //      存在hash表里面的历史前缀和数据,
            //      key是历史前缀和数据姑且叫为 preSumLeft, value是出现的次数
            // 可以得到：
            int preSumLeft = preSumRight - k;
            if (hashMap.count(preSumLeft) == 1) {
                result += hashMap[preSumLeft];
            }

            // 将当前前缀和存储hash表
            hashMap[preSumRight]++;
        }
        return result;*/

        unordered_map<int, int> hashMap;
        hashMap[0] = 1;  //插入第一个元素
        int result = 0;
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            sum = sum + nums[i];
            if(hashMap.count(sum - k) == 1){
                result = result + hashMap[sum-k];
            }
            hashMap[sum]++;
        }

        return result;
    }
};