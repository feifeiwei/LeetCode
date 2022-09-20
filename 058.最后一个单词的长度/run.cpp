class Solution {
public:
    int lengthOfLastWord(string s) {
        int right = s.size()-1;
        while(s[right]==' ') right--;
        int left = right;
        while(left>=0 && s[left]!= ' ') left--;
        return right - left;

    }
};
