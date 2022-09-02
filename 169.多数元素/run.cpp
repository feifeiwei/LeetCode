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
    int majorityElement(vector<int>& nums) {

        int tmp = -1;
        int count = 0;

        for(int& num:nums)
        {
            if (num==tmp)
                count++;
            else if (--count < 0)
            {
                tmp = num;
                count = 1;
            }
        }
        return tmp;
        }
};



int main()
{
    vector<int> v{3,2,3};
    
    Solution s;
    cout << s.majorityElement(v) << endl;
    
    cout<<"done!\n";

   return 0;
}
