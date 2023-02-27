
#include <iostream>
#include <vector>
#include <unordered_set>
#define PRINT

using namespace  std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> s;

        for(int i=0; i< nums.size(); i++)
        {
            if(i > k) s.erase(nums[i-k-1]);
            if (s.count(nums[i])) return true;
            s.emplace(nums[i]);
        }

        return false;

        
    }
};


int main()
{
    
    vector<int> s{1,2,3,1};
    Solution ss;
    cout <<ss.containsNearbyDuplicate(s, 3) << endl;
    
    
    return 0;
}
