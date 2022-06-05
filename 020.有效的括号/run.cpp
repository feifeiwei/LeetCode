//
//  main.cpp
//  leetcode_learn
//
//  Created by feifeiwei on 2022/4/29.
//

#include <iostream>
#include <list>
#include <algorithm>
#include <stack>
#include <vector>
#include<queue>
#include <deque>
#include <cstdlib>
#include <math.h>
#include <unordered_map>
using namespace std;
//using vectorIter = vector<int>::iterator;


//class Solution {
//public:
//    bool isValid(string s) {
//        unordered_map<char, char> um{{'(',')'}, {'[',']'},{'{','}'}};
//        stack<char> st;
//        st.push('?');
//
//        for(int i=0; i<s.size(); ++i){
//            char tmp = s.at(i);
//            if (um.count(tmp)>0)
//                st.push(tmp);
//            else if (um[st.top()]!=tmp)
//                return false;
//            else
//                st.pop();
//        }
//        return st.size()==1;
//    }
//};


class Solution {
public:
    bool isValid(string s) {
        int top=-1;
        for (int i=0; i<s.length(); ++i){
            if (top<0 || !isMatch(s[top], s[i])){
                top ++;
                s[top] = s[i];
                
            }
            else{
                --top;
            }
        }
        return top ==-1;
    }
    
    bool isMatch(char a, char b){
        if (a=='(' && b==')') return true;
        if (a=='[' && b==']') return true;
        if (a=='{' && b=='}') return true;
        return false;
    }
};

int main(){
    
    string s = "[[()]][]{}";
    Solution sl;
    bool ans = sl.isValid(s);
    
    cout << ans << endl;

    return 0;
}

