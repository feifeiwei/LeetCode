//
//  main.cpp
//
//  Created by feifeiwei on 2022/2/10.
//

#include <iostream>
#include <list>
#include <algorithm>
#include <vector>
#include <string>
#include<queue>
#include <functional>

using namespace std;

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        
        vector<string> res;
        
        std::function<void(string, int, int)> addParenthesis = [&] (string str, int ln, int rn){
            if(ln==0 && rn==0) res.push_back(str);
            if(ln>0) addParenthesis(str+"(", ln-1, rn+1);
            if(rn>0) addParenthesis(str+")", ln, rn-1);
        };
        
        addParenthesis("", n, 0);
        return res;
        
    }
};


int main()
{
    int n=3;
    
    Solution s;
    
    for(auto c : s.generateParenthesis(n)){
        cout << c << endl;
    }
    
    
    cout<<"done!\n";

   return 0;
}
