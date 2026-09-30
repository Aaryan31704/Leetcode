class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int min_num = INT_MAX;
        int l = 0, r = k - 1;
        while(l <= (n-k)){
            int diff = nums[r++] - nums[l++];
            min_num = min(min_num, diff);
        }
        return min_num;
    }
};