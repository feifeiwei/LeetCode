#include <iostream>
#include <list>
#include <algorithm>
#include <vector>


using namespace std;
using vecIter = vector<int>::iterator;


void print_vector(const vector<char> &v){
    for(auto &c : v)
        cout << c <<" ";
    cout << endl;
}


class Solution {
public:
    int compress(vector<char>& chars) {
        int len=0;
        for(int i=0, cnt=1; i<chars.size(); i++, cnt++){
            if(i+1==chars.size() || chars[i] != chars[i+1]){
                chars[len++] = chars[i];
                if (cnt > 1){
                    for(char ch : to_string(cnt))
                        chars[len++] = ch;
                }
                cnt = 0;
            }
        }
        return len;
    }
};




int main()
{
    
    vector<char> chars = {'a','a','a','a','a','a','a','a','a','a','a','a','b','b','c','c','c'};
    Solution s;
    int res=s.compress(chars);
    cout <<" done! \n index = " << res << endl;
    print_vector(chars);
    return 0;
    
}
