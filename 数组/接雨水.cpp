//
// Created by 方 on 2024/2/1.
//

#include <vector>
#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        /*int ans = 0;
        stack<int> st;
        for (int i = 0; i < height.size(); i++) {
            while (!st.empty() && height[st.top()] < height[i]) {
                int cur = st.top();
                st.pop();
                if (st.empty()) {
                    break;
                }
                int l = st.top();
                int r = i;
                int h = min(height[r], height[l]) - height[cur];
                ans += (r - l - 1) * h;
            }
            st.push(i);
        }
        return ans;*/
        height.insert(height.begin(), 0);
        height.push_back(0);
        int res = 0;
        vector<int> left;
        vector<int> right;
        int leftMax = 0;
        int rightMax = 0;
        for(int i = 1; i < height.size() - 1; i++){
            leftMax = leftMax > height[i-1] ? leftMax : height[i-1];
            left.push_back(leftMax);  //左边求最大值
        }
        //右边求最大值
        for(int i = height.size()-2; i > 0; i--){
            rightMax = rightMax > height[i+1] ? rightMax : height[i+1];
            right.push_back(rightMax);
        }

        int temp = right.size();
        for(int i = 1; i < height.size() - 1; i++){
            if(height[i] > left[i-1] || height[i] > right[temp-i]){
                continue;
            }else{
                if(left[i-1] < right[temp-i]){
                    res = res + (left[i-1] - height[i]);
                }else{
                    res = res + (right[temp-i] - height[i]);
                }
            }
        }

        return res;
    }
};

int main() {
    vector<int> height{0,1,0,2,1,0,1,3,2,1,2,1};
    int res = Solution().trap(height);
    return 0;



    //just a test;
}

