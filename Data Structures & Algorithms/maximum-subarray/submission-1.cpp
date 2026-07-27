class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int best = nums[0];
        for(int i = 0; i < n; i++){
            int total = 0;
            for(int j = i; j < n; j++){
                total = total + nums[j];
                best = max(best, total);
            }
        }
        return best;
    }
};
