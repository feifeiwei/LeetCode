#include <iostream>
//#include <string>
#include <memory>
#include <vector>
#include <thread>
#include <chrono>
using namespace std;
  

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        bool isZeroFisrt_col = false;
        int rows = matrix.size(), cols = matrix[0].size();
        
        for(int i=0; i<rows; ++i)
        {
            if (matrix[i][0] == 0) isZeroFisrt_col = true;
            
            for(int j=1; j<cols; ++j)
            {
                if( matrix[i][j] ==0) matrix[i][0] = matrix[0][j] = 0;
            }
            
        }
            
        for(int i=rows-1; i>=0; --i)
        {
            for(int j=cols-1; j>0; --j)
            {
                if (matrix[i][0]==0 || matrix[0][j]==0) matrix[i][j]=0;
            }
            if(isZeroFisrt_col) matrix[i][0] = 0;
            
        }
        
    }
};


void print_matrix_2d(const vector<vector<int>>& matrix)
{
    for (auto c : matrix)
    {
        for (auto v: c)
            cout << v <<" " ;
        cout << endl;
    }
}


int main(){

    vector<vector<int>> m = {{0,1,2,0},{3,4,5,2},{2,1,1,1}};
    Solution s;
    print_matrix_2d(m);
    cout << "------------" << endl;
    s.setZeroes(m);
    
    
    print_matrix_2d(m);
    
    
    return 0;
}
