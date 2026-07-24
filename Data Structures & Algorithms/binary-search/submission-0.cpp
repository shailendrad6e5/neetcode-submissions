class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int st = 0;
        int ed = n - 1;
        while(st <= ed){

            int avg = (st + ed)/2;
            if(nums[avg] > target){
                ed = avg - 1;
            }
            else if(nums[avg] < target){
                st = avg + 1; 
            }
            else return avg;
        }
        return -1;
    }
};
