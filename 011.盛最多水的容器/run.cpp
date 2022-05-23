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
    int maxArea(vector<int>& height) {
        int area=0;
        int left=0, right=height.size()-1;
        
        while (left < right){
            area = max(area, (right-left)*min(height[left],height[right]));
            if (height[left]<height[right])
                left++;
            else
                right--;
        }
        return area;
    }
};


int main(){
    
    vector<int> x = {1,8,6,2,5,4,8,3,7};
    Solution s;
    cout << s.maxArea(x) << endl;
}
