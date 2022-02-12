//
//  main.cpp
//
//  Created by feifeiwei on 2022/2/10.
//

#include <iostream>
#include <vector>
#include <string>
using namespace::std;


class Solution {
public:
    string longestPalindrome(string s) {

        
        string max_str="";
        for (size_t i=0; i<s.size(); i++){
            string cur_str = this->valCurPalind(s, i, i);
            string cur_str2 = this->valCurPalind(s, i, i+1);
            cout <<"i=" <<i <<" "<<cur_str << " " <<cur_str2<<endl;
            cur_str.size() > max_str.size() ? (max_str=cur_str):(max_str);
            cur_str2.size() > max_str.size() ? (max_str=cur_str2):(max_str);

        }
        
        return max_str;
    }
    
    
    string valCurPalind(const string &s, int left, int right){
        
        while(left>=0 && right < s.size() && s[left]==s[right]){
            left--;
            right++;
        }
        left++;
        return s.substr(left, right-left);
    }
};



int main() {

    string s = "b"; //"babac";
    Solution run;
    
    string res = run.longestPalindrome(s);
    cout << "res: " << res<<endl;
    
    
    
//
    return 0;
}
