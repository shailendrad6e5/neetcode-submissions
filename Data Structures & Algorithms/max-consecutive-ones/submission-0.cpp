class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int maxcount = 0;
        for (int i = 0; i < n; i++)
        {
            (nums[i] == 1) ? count++ : count = 0;
            if (maxcount < count) maxcount = count;
        }
        return maxcount;
    }
};