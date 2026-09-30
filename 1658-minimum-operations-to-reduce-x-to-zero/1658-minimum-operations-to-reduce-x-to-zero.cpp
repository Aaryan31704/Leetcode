class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();
        int sum = 0, tar_sum = 0, count = 0;
        for(auto &num : nums)
            sum += num;
        tar_sum = sum - x;

        if(sum == x)
            return n;
        if(sum < x)
            return -1;

        int l = 0, r = 0;
        sum = 0;
        while(r < n){
            sum += nums[r];

            while(sum > tar_sum){
                sum -= nums[l];
                l++;
            }
            if(sum == tar_sum)
                count = max(count, r-l+1);
            r++;
        }
        if(count == 0)
            return -1;
        int ans = n - count;
        return ans;
    }
};