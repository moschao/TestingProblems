//
// Created by 方 on 2024/2/6.
//
#include <string>
#include <iostream>
using namespace std;
using namespace std;
class Solution {
public:
    int myAtoi(string s) {
        string res = "";
        for(int i = 0;i < s.size();i++){
            if(s[i] == ' ') {
                continue;
            }
            else{//找到第一个非空字符,只有第一个非空为+或-或数字时才有答案，不然直接return 0
                if(s[i] == '+' || s[i] == '-'){
                    if(i+1 <= s.size()-1){
                        if(s[i+1] >'9'|| s[i+1]<'0') return 0;
                        else{
                            int k = i+1;
                            while(s[k] == '0') k++;
                            for(int j = k ;j < s.size() && s[j] >= '0' && s[j] <= '9';j++){
                                res.push_back(s[j]);
                            }
                            if(s[i] == '-') res.insert(0,"-");
                            break;
                        }
                    }
                }
                else if(s[i] >= '0' && s[i] <= '9'){
                    int k = i;
                    while(s[k] == '0') k++;
                    for(int j = k ;j < s.size() && s[j] >= '0' && s[j] <= '9';j++){
                        res.push_back(s[j]);
                    }
                    break;
                }
                else return 0;
            }
        }
        int ans = 0;
        if(res.size()!=0){
            long long num = atol(res.c_str());
            if(num > INT_MAX) ans = INT_MAX;
            else if(num < INT_MIN) ans = INT_MIN;
            else ans = num;
        }
        return ans;
    }
};


//方法2

class Solution {
public:
    int myAtoi(string s) {
        int result = 0;
        int sign = 1;//记录正负号
        int index = 0;

        //1.去掉空格
        while (index < s.size() && ' ' == s[index]){
            index++;

        }

        //2.记录正负号（如果有的话）
        if (index < s.size() && '-' == s[index]) {
            sign = -1; index++;
        }
        else if (index < s.size() && '+' == s[index]){
            index++;
        }


        //3.处理数字
        while (index < s.size() && s[index] >= '0' && s[index] <= '9') {
            int num = s[index] - '0';
            if (result > (INT_MAX - num) / 10)return INT_MAX;//超出最大值边界返回最大值,减去num的作用是防止加上num后超出边界。
            if (result < (INT_MIN + num) / 10) return INT_MIN;//超出最小值边界返回最小值，负数需要加上num，作用同上
            result = result * 10 + sign * num;
            index++;
        }
        return result;
    }
};