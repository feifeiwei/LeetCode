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
    string multiply(string num1, string num2) {
        
        string res(num1.size()+num2.size(), '0');
        
        for(int i=num1.size()-1; i>=0; --i)
        {
            int carry = 0;
            for(int j=num2.size()-1; j>=0; --j)
            {
                int sum = (res[i+j+1]-'0') + (num1[i] - '0') * (num2[j] - '0') + carry;
                res[i+j+1] = sum%10 + '0';
                carry = sum / 10;
            }
            res[i]  += carry;
        }
        
        size_t pos = res.find_first_not_of('0');
        if(pos != string::npos) return  res.substr(pos);
        return "0";

    }
};

int main()
{
    string x = "123";
    string y = "43";
    Solution s;
    string z = s.multiply(x, y);
    cout << z << endl;

    cout<<"done!\n";

   return 0;
}

