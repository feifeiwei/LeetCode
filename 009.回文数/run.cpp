//
//  main.cpp
//
//  Created by feifeiwei on 2022/2/10.


#include <iostream>
#include <vector>
#include <string>
using namespace::std;


class Solution {
public:
    bool isPalindrome(int x) {
        
        if (x<0)
            return false;
        int cur = 0;
        int val = x;
        
        while(val!=0){
            cur = cur * 10 + val % 10;
            val /= 10;
        }
        
        return x==cur;
        
    }
};



int main()
{
    
    int x = 1234567899;
    Solution run;
    bool res = run.isPalindrome(x);
    
    
    cout << res;
    
    cout << endl;
    

 
   return 0;
}
