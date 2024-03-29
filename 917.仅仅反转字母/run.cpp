#include <iostream>
#include <list>
#include <algorithm>
#include <vector>

using namespace std;
using vecIter = vector<int>::iterator;


class Solution
{
public:
    string reverseOnlyLetters(string s)
    {
        
        int left=0, right=s.size()-1;
        while(true)
        {
            while(left < right && !isalpha(s[left]))
                left++;
            while(left < right && !isalpha(s[right]))
                right--;
            if(left>=right)
                break;
            swap(s[left], s[right]);
            left++;
            right--;
            
        }
        
        
        return s;
    }
};



int main()
{
    
    string str = "a-bC-dEf-ghIj";

    Solution s;
    cout << s.reverseOnlyLetters(str) << endl;
    
    return 0;
    
}
