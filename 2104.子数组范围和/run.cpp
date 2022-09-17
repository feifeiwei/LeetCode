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
};


int main()
{
    vector<int> v{4,-2,-3,4,1};
    
    Solution s;
    cout << s.subArrayRanges(v) << endl;
    
    cout<<"done!\n";

   return 0;
}
