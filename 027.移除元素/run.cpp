//
//  main.cpp
//  data_structure_cpp
//
//  Created by feifeiwei on 2022/2/10.
//

#include <iostream>
#include <vector>

using namespace::std;


class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        if (nums.size()==0)
            return 0;
         //方法1 vector erase函数
//        for(auto i=nums.begin(); i!=nums.end(); i++){
//            if (*i == val){
//                i = nums.erase(i);
//                i--;}
//        }
//        int res = nums.size();
//
//        return res;
        
         //方法2 拷贝覆盖
        int in=0;
        for(size_t i=0; i!=nums.size(); i++){
            if (nums[i] != val){
                nums[in] = nums[i];
                in++ ;
            }
        }
        
        return in;
        
    }
};




int main() {

    vector<int> nums = {0,1,2,2,3,0,4,2};
    int val = 2;
    Solution run;
    run.removeElement(nums, val);
    
    for(auto c: nums)
        cout << c << " ";
    cout << endl;
    
    return 0;
}
