//
//  main.cpp
//  data_structure_cpp
//
//  Created by feifeiwei on 2022/2/10.
//

#include <iostream>
#include <list>
#include <algorithm>
#include <vector>
#include <string>
#include<queue>


using namespace std;
using vectorIter = vector<int>::iterator;


class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long res = 0;
        //暴力法
        for(int i=0; i<nums.size(); ++i){
            int minVal = INT_MAX, maxVal = INT_MIN;
            for(int j=i; j<nums.size(); ++j){
                minVal = min(minVal, nums[j]);
                maxVal = max(maxVal, nums[j]);
                
                res += (maxVal - minVal);
                
            }
        }

        return res;
    }
    
    long long subArrayRanges2(vector<int>& nums) {
        long long res = 0;
        
        size_t count = nums.size();
        for(int i=0; i<count; ++i){
            
            long l_min=1, r_min=1;
            while(i-l_min>=0 && nums[i-l_min]<=nums[i]) l_min++;
            while(i+r_min<count && nums[i+r_min]<nums[i]) r_min++;
            res += (r_min*l_min) * nums[i];
            
            long l_max=1, r_max=1;
            while(i-l_max>=0 && nums[i-l_max] > nums[i]) l_max++;
            while(i+r_max<count && nums[i+r_max] >= nums[i]) r_max++;
            res -= (l_max*r_max) * nums[i];
             
        }
        return res;
        
    }
    
};


int main()
{
    vector<int> v{1,3,3};
    
    Solution s;
    cout << s.subArrayRanges2(v) << endl;
    
    cout<<"done!\n";

   return 0;
}
