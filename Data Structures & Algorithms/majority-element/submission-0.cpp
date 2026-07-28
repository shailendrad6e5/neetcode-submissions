class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int maxcount = 0;
        int value = nums[0];
        for(int i = 0; i < n; i++){
            int count = 0;
            for(int j = i; j < n; j++){
                if(nums[i] == nums[j]){
                    count++;
                }
                if(count > maxcount && count > n/2) value = nums[i]; 
                maxcount = max(maxcount, count);
            }
        }
        return value;
    }
};