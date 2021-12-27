#include <iostream>
#include <vector>
#include<map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {


        vector<int> res;
        map <int, int> tmp;

        int idx = 0;
        for (auto c: nums){
            
            if (tmp.count(c)==0)
                tmp[target-c] = idx;
            else{
                res.push_back(idx);
                res.push_back(tmp[c]);
                break;
            }
            idx ++;

        }




        return res;

    }
};




int main(){


    vector<int> nums {2,7,11,15} ;
    int target = 9;

    Solution run;

    vector<int> res = run.twoSum(nums, target);
    for (auto c: res)
        cout <<"res: " <<  c<<endl;

    return 0;
}