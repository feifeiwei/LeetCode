class Solution {
public:
    int jump(vector<int>& nums) {

        int border=0;
        int max_position=0; //记录当前能达到最远出
        int step=0;

        for(int i=0; i<nums.size()-1; ++i)
        {
            max_position = max(max_position, nums[i] + i);

            if(i==border)
            {
                border = max_position;
                ++step;
            }

        }
        return step;

    }
};