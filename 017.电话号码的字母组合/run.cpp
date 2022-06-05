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
#include <deque>
#include <cstdlib>
#include <math.h>
#include <unordered_map>
using namespace std;
//using vectorIter = vector<int>::iterator;

class Solution {
private:
    vector<string> ans;
    string res;
public:
    vector<string> letterCombinations(string digits) {
        
        int size = digits.size();
        if(size==0) return ans;
        
        unordered_map<int, string> map{{'2',"abc"},{'3',"def"},{'4',"ghi"},
            {'5',"jkl"},{'6',"mno"},{'7',"pqrs"},
            {'8',"tuv"},{'9',"wxyz"}};

        queue<string> queue_tmp;
        queue_tmp.push("");
        
        for(int i=0; i<size; ++i){
            string cur_str = map[digits.at(i)];
            int len_queue = queue_tmp.size();
            
            for(int q=0; q<len_queue; ++q){
                string tmp = queue_tmp.front();
                queue_tmp.pop();
                for(int j=0; j<cur_str.size(); ++j){
                    queue_tmp.push(tmp+cur_str.at(j));
                }
            }
        }
        
        while(!queue_tmp.empty()){
            ans.push_back(queue_tmp.front());
            queue_tmp.pop();
        }
        
        
        return ans;
    }
};



int main(){
    
    string digits = "23";
    Solution s;
    
    vector<string> res = s.letterCombinations(digits);
    cout << res.size()<< endl;
    for(const auto &c:res)
        cout << c <<" ";
    cout << endl;
    return 0;
}

