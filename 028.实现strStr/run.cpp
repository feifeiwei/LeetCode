#include <iostream>
#include <list>
#include <algorithm>
#include <vector>


using namespace std;
using vecIter = vector<int>::iterator;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int index=-1;
        for(auto iter=haystack.begin(); iter!=haystack.end(); ++iter){
            
            auto tmp_iter=iter;
            auto n_iter=needle.begin();
            index++;
            while(*tmp_iter==*n_iter){
                if(n_iter==needle.end())  break;
                if(tmp_iter==haystack.end()) break;
                n_iter++;
                tmp_iter++;
            }
            if (n_iter==needle.end()) return index;
            
        }
        
        return -1;
    }
};

int main()
{
    
    string haystack = "aaa", needle = "aaaa";
    Solution s;
    int res=s.strStr(haystack, needle);
    cout <<"index: " << res << endl;
    return 0;
    
}

