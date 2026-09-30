class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        if(nums.size() == 1)
            return nums;
        int n = nums.size();
        vector<int> res(n);
        res[0] = 1;
        int rp = 1;
        for(int i = 1; i < n; i++){
            res[i] = res[i-1] * nums[i-1];
        }
        
        for(int i = n-1; i >= 0; i--){
            res[i] = res[i] * rp;
            rp *= nums[i];
        }
        return res;
    }
};