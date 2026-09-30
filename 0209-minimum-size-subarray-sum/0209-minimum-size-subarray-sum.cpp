class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0, r = 0, sum = 0, min_len = INT_MAX;
        bool flag = false;
        int n = nums.size()-1;
        while(l <= r && r <= n){
            sum += nums[r++];
            while(sum >= target){
                min_len = min(min_len, r-l);
                flag = true;
                sum -= nums[l];
                l++;
            }
        }
        if(flag)
            return min_len;
        else
            return 0;
    }
};