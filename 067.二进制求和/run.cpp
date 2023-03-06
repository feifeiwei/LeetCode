class Solution {
public:
    string addBinary(string a, string b) {
        string ret;
        bool carry{false};
        
        
        for(auto i=a.size(), j=b.size(); i||j||carry; )
        {
            bool a_bit{i && a[--i]=='1'};
            bool b_bit{j && b[--j]=='1'};
            
            ret = (a_bit ^ b_bit ^ carry ? "1" : "0") + ret;
            
            carry = a_bit + b_bit + carry > 1;

        }

        return ret;
        
    }
};