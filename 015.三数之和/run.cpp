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
    vector<vector<int>> threeSum(vector<int>& nums) {
        int count = nums.size();
        if (count < 3) return {};
        
        vector<vector<int>> res;
        std::sort(nums.begin(), nums.end());
        
//
        for(int i=0; i<count; ++i){
            int cur = nums[i];
            if (cur>0) break;
            
            if(i>0 && cur==nums[i-1])
                continue;

            int L=i+1, R=count-1;

            while(L<R){
                int sum = cur+nums[L]+nums[R];
                if (sum>0) R--;
                else if (sum <0) L++;
                else{
                    res.push_back({cur,nums[L],nums[R]});
                    while(L<R && nums[L]==nums[L+1]) L++;
                    while(L<R && nums[R]==nums[R-1]) R--;
                    L++;
                    R--;
                }

            }
        }
        return res;
    }
};




int main(){
    
    vector<int> nums = {-1,2,1,-4,-1};
    Solution s;
    
    vector<vector<int>> res = s.threeSum(nums);
    return 0;
}
