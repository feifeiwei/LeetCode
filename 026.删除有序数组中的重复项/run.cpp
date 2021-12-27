#include <iostream>
#include <vector>

using namespace::std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        if (nums.size()==0)
            return 0;

        int slow = 0;

        for(size_t fast=1; fast!=nums.size(); ++ fast){

            if (nums[fast]!=nums[slow]){
                slow ++;
                nums[slow] = nums[fast];
            }
                
        }


        return slow + 1;





    }
};


int main(){

    vector<int> nums{0,0,1,1,1,2,2,3,3,4};
    Solution run;
    
    int res = run.removeDuplicates(nums);
    cout <<"nums: "<<res <<endl;
    
    for (auto c: nums){
        cout <<c <<" ";
    }
    cout <<endl;

}