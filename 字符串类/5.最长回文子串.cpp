/*************************************************************************
    > File Name: 5.最长回文子串.cpp
    > Author: CatalinChao
    > Mail: xcodemiuios@gmail.com 
    > Created Time: 一  2/27 19:52:44 2023
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
using namespace std;


class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        if (n < 2) {
            return s;
        }
        int maxLen = 1;
        int begin = 0;

        // dp[i][j] 表示 s[i..j] 是否是回文串，二维数组的初始化，全部为false
        vector<vector<int>> dp(n, vector<int>(n, false)); //false可以省略

        // 初始化：所有长度为 1 的子串都是回文串
        for (int i = 0; i < n; i++) {
          dp[i][i] = true;
        }
       // 递推开始
        // 先枚举子串长度
       for (int j=1; j<n; j++){
         for (int i=0; i<j; i++){
            if (s[i]!=s[j]){
                dp[i][j]=false;
            } else{
                if(j-i<3){ //在s[i]=s[j]的情况下
                    dp[i][j]=true;
                } else{
                    dp[i][j]=dp[i+1][j-1];
                }
            }

            // 只要 dp[i][L] == true 成立，就表示子串 s[i..L] 是回文，此时记录回文长度和起始位置
            if (dp[i][j] && j - i + 1 > maxLen) {
                maxLen = j - i + 1;
                begin = i;
            }
         }
    }
    return s.substr(begin, maxLen);
   }
};

