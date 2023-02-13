/*************************************************************************
    > File Name: HJ3明明的随机数.cpp
    > Author: CatalinChao
    > Mail: xcodemiuios@gmail.com 
    > Created Time: 一  2/13 19:56:53 2023
 ************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    int n;
    int tempt;
    int a[1000] ={0};
    cin >> n;
hu

    while(n--){
        cin >> tempt;
        a[tempt] = 1;
        //n--;
    }
    for(int i = 0; i < 1000; i++){
        if(a[i] == 1){
            cout << i << endl;
        }
    }
    

    return 0;
}
// 64 位输出请用 printf("%lld")

