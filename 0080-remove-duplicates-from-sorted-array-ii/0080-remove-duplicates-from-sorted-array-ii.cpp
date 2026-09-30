class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0, j = 0, k = 0, count = 0, min_count = INT_MAX;
        int n = nums.size();
        vector<int> res;
        while(j < n){
            count = 0;
            while(j < n && nums[i] == nums[j]){
                j++;count++;
            }
            min_count = min(count, 2);
            while(min_count > 0){
                nums[k++] = nums[i];
                min_count--;
            }
            i = j;
        }
        
        return k;
    }
};