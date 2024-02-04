//
// Created by 方 on 2024/2/4.
//

//太秀了
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> merged;

        for (int i=0; i<intervals.size(); ){
            int left = intervals[i][0];
            int right = intervals[i][1];
            while (i+1 < intervals.size() && right >= intervals[i+1][0]){
                right = max(right, intervals[i+1][1]);
                i++;
            }
            merged.push_back({left, right});
            i++;
        }
        return merged;
    }
};