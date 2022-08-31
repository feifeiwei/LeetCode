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
    int addDigits(int num) {
        while (num>9)
        {
            int sum=0;
            while(num>0)
            {
                sum += num%10;
                num /= 10;
            }
            
            num = sum;
        }
        return num;
    }
};



int main()
{
    int num = 912;
    
    Solution s;
    cout << s.addDigits(num) << endl;
    cout<<"done!\n";
    
   return 0;
}
