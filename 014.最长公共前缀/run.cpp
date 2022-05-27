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
    string longestCommonPrefix(vector<string>& strs) {
        
        int count = strs.size();
        if (count==0) return "";
        
        int len = strs[0].size();
        string prefix = strs[0];
        for(int i=1; i<count; ++i){
            prefix = longest_common_prefix(prefix, strs[i]);
        }
        return prefix;
    }
    
    string longest_common_prefix(const string& s1, const string& s2){
        int len = min(s1.size(), s2.size());
        int index = 0;
        while (index<len && s1[index]==s2[index]) ++index;
        return s1.substr(0, index);
    }
    
};




int main(){
    
    vector<string> strs = {"fei", "fei", "f"};
    Solution s;
    
    cout << s.longestCommonPrefix(strs)<<endl;
    return 0;
}

