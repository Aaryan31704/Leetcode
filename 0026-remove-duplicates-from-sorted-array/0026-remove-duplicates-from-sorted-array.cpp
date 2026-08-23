class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n == 1)
            return 1;
        
        int i = 0, j = 0;
        while(i < n && j < n){
            while(j < n && nums[i] == nums[j])
                j++;
            
            if(j < n){
                nums[i + 1] = nums[j];
                i++;
            }
        }
        return i + 1;
    }
};