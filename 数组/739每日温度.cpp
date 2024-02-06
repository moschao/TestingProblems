//
// Created by 方 on 2024/2/6.
//

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> res(temperatures.size(),0);
        stack<int> mystack;

        for(int i = 0; i < temperatures.size(); i++){
            while(!mystack.empty() && temperatures[i] > temperatures[mystack.top()]){
                auto t = mystack.top();
                mystack.pop();
                res[t] = i -t;
            }

            mystack.push(i);
        }

        return res;
    }
};

