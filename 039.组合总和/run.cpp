
#include <iostream>
#include <vector>
#include <unordered_set>
#define PRINT

using namespace  std;

class Solution {
public:
    vector<vector<int> > combinationSum(vector<int> &candidates, int target) {

        vector<vector<int>> ret;
        vector<int> cur;
        
        dfs(candidates, 0, target, cur, ret);
        
        return ret;
    }
    
    void dfs(const vector<int>&cand, int start, int t, vector<int>& cur, vector<vector<int>>& ret)
    {
        if (!t) {
            ret.push_back(cur);
            return;
        }
        
        for (int i=start; i<cand.size(); i++) {
            cur.push_back(cand[i]);
            if(t>=cand[i]) dfs(cand, i, t-cand[i], cur, ret);
            cur.pop_back();
        }
    }
};



int main()
{
    
    vector<int> candidates{6,2,3,7};
    int target = 7;
    Solution ss;
//    cout <<s << endl;
    
    auto res = ss.combinationSum(candidates, target);
    
    for(auto& c: res){
        for (int i=0; i<c.size();i++)
            cout << c[i] <<" " ;
        cout << endl;
    }
        
    
    
    return 0;
}
