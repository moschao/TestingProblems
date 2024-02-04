//
// Created by 方 on 2024/2/3.
//

#include <vector>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int h = matrix.size();
        int l = matrix[0].size();
        for(int i = 0; i < matrix.size(); i++) {
            for(int j = 0; j < matrix[0].size(); j++){
                if(matrix[i][j] == 0){
                    //先把i行干0
                    for(int k = 0; k < l; k++){
                        matrix[i][k] = 0;
                    }
                    for(int g = 0; g < h; g++){
                        matrix[g][j] = 0;
                    }
                }
            }
        }
    }
};

int main() {
    vector<vector<int>> matrix;
    vector<int> l1{1,1,1};
    vector<int> l2{1,0,1};
    vector<int> l3{1,1,1};
    matrix.push_back(l1);
    matrix.push_back(l2);
    matrix.push_back(l3);
    Solution().setZeroes(matrix);
    return 0;
}