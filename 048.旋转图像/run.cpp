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
#include <functional>

using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        reverse(matrix.begin(), matrix.end());
        
        for(decltype(matrix.size()) i=0; i<matrix.size(); ++i)
            for(decltype(matrix.size()) j=0; j<i; ++j)
                swap(matrix[i][j], matrix[j][i]);
    }
};


int main()
{
    vector<vector<int>> matrix = {{1,2,3}, {4,5,6}, {7,8,9}};
    
    Solution s;
    s.rotate(matrix);
    
    for(auto c: matrix){
        for(auto v:c){
            cout << v << " ";
        }
        cout << endl;
    }
    cout<<"done!\n";

   return 0;
}
