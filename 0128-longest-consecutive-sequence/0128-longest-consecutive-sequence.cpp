class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        int max_count = 0;
        int count = 1;
        int n = nums.size();
        if(n == 1)
            return 1;
        if(n == 0)
            return 0;
        for(int i = 1; i < n; i++){
            if(nums[i] == nums[i-1])
                continue;
            if(nums[i]-nums[i-1] == 1){
                count++;
            }
            else{
                max_count = max(max_count, count);
                count = 1;
            }
        }
        return max(max_count, count);
    }
};