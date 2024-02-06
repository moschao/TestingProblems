//
// Created by 方 on 2024/2/5.
//

#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    void split(string s, vector<string>& res){
        string temp = "";
        for(int i = 0; i < s.length(); i++){
            if(s[i] == ' '){  //当前字符是空格
                if(temp != ""){
                    res.push_back(temp);
                    temp = "";
                }
            }else{
                temp += s[i];
                if(i == s.length() -1){
                    res.push_back(temp);
                }
            }

        }
    }
    string reverseWords(string s) {
        string result = "";
        vector<string> res;
        split(s, res);

        for(int i = res.size()-1; i >= 0; i--) {
            result = result + res[i];
            if( i != 0){
                result += " ";
            }
        }

        return result;
    }
};
int main() {
    string s = "the sky is blue";
    Solution().reverseWords(s);
    return 0;
}


// 另外一种方法
/*class Solution {
public:
    string reverseWords(string s) {
        string res;
        int n = s.size(), i = n - 1;
        while (i >= 0) {
            // 找出第一个不是空格字符
            while (i >= 0 && s[i] == ' ') -- i;
            int j = i;
            while (j >= 0 && s[j] != ' ') -- j;
            if (i == j) break;

            string t = s.substr(j + 1, i - j);
            res += t + ' ';
            i = j - 1;
        }

        res.pop_back();
        return res;
    }
};*/