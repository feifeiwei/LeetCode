//
//  main.cpp
//  leetcode_cpp
//
//  Created by feifeiwei on 2021/12/31.
//
#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace::std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        
        unordered_map<char, int> umap;
        int maxLen = 0;
        int start = 0;
        
        
        for(int i=0; i!=s.size(); ++i){
            char cur_s = s[i];
            
            if (umap.count(cur_s) > 0 && start <= umap[cur_s]){ // 在里面
                start = umap[cur_s]+1;
                
            }
            else{
                maxLen = max(maxLen, i-start+1);
            }
            
            
            umap[cur_s] = i;
            
        }
        
        return maxLen;
        
    }
};


int main(){

    string s ="tmmzuxt";
    Solution run;
    int re = run.lengthOfLongestSubstring(s);

    cout <<re<<endl;

}

