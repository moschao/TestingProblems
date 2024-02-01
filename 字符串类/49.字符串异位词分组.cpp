//
// Created by 方 on 2024/1/14.
//

#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        //遍历字符串
        for(auto &str : strs) {
            string key = str;
            sort(key.begin(), key.end());   //对字符串进行排序
            mp[key].push_back(str);   //进行插入，mp[key]索引到了vector<sting>
        }
        vector<vector<string>> res;
        res.reserve(mp.size());
        for(auto & it : mp) {
            res.push_back(it.second);
        }
        return res;
    }
};
