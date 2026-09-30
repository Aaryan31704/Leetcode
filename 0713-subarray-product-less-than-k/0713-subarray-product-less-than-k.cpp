class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        int prod = 1, l = 0, r = 0, count = 0;

        if(k <= 1)
            return 0;

        while(r < n){
            prod *= nums[r];
            while(prod >= k){
                prod /= nums[l];    
                l++;
            }
            count += r - l + 1;
            r++;
        } 
        return count;
    }
};