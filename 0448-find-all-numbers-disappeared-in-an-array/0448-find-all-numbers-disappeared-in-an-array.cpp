class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> res;
        int idx = 0;
        for(int i = 0; i < nums.size(); i++){
            idx = abs(nums[i]) - 1;
            if(nums[idx] < 1)
                continue;
            nums[idx] = nums[idx] * -1;
        }

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] >= 1)
                res.push_back(i + 1);
        }
        
        return res;
    }
};