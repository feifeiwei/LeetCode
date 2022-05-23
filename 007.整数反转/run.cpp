//
//  main.cpp
//  leetcode_learn
//
//  Created by feifeiwei on 2022/4/29.
//

#include <iostream>
#include <list>
#include <algorithm>
#include <vector>
#include<queue>
#include <cstdlib>
#include <math.h>
using namespace std;
//using vectorIter = vector<int>::iterator;


class Solution {
public:
    int reverse(int x) {
        int rev = 0;
//        div_t memo = div(x, 10);
        while(x!=0){
            if((rev>214748364)||(rev<-214748364)) return 0; // 前一位来算。
            rev = 10*rev + x%10;
            x /= 10;
        }
        return rev;
    }
};


int main(){
    
    int x = -2147483412;
    Solution s;
    cout << s.reverse(x) << endl;
    
   //2^31-1=2147483647,-2^31=-2147483648
    
}
