
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
    int threeSumClosest(vector<int>& nums, int target) {
        std::sort(nums.begin(), nums.end());
        int min{INT_MAX}, sum{0}, tmpsum{0};
        
        for (auto it=nums.cbegin(); it!=nums.cend(); ++it){
            for(auto b=std::next(it), e=std::prev(nums.cend()); b<e; tmpsum>target? --e: ++b){
                if ((tmpsum = *it + *b + *e)==target) return target;
                else if (std::abs(tmpsum-target) < min){
                    min = std::abs(tmpsum-target);
                    sum = tmpsum;
                }
            }
        }
        return sum;
    }
};




int main(){
    
    vector<int> nums = {-1,2,1,-4};
    int target = 1;
    Solution s;
    
    int res = s.threeSumClosest(nums, target);
    cout << res << endl;
    return 0;
}
