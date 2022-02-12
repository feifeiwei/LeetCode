//
//  main.cpp
//
//  Created by feifeiwei on 2022/2/10.


#include <iostream>
#include <vector>
#include <string>
using namespace::std;


class Solution {
public:
    string convert(string s, int numRows) {
        
        if (numRows==1 || numRows >= s.size())
            return s;
        
        vector<string>L(numRows, "");
        
        int index=0;
        int step=1;
        
        for (auto c: s){
            L[index] += c;
            if (index==0)
                step = 1;
            else if (index==numRows-1)
                step = -1;
            index += step;
        }
        
        string ss="";
        
        for (auto c: L){
            ss += c;
        }
        
        return ss;
    }
};





int main() {

    string s = "AdwdB";
    int numRows = 2;
    Solution run;
    run.convert(s, numRows);
    
    
    
//
    return 0;
}
