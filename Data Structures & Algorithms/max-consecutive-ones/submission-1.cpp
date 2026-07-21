class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxcount = 0;
        for (int i : nums)
        {
            (i == 1) ? count++ : count = 0;
            if (maxcount < count) maxcount = count;
        }
        return maxcount;
    }
};