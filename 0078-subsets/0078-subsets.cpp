class Solution {
public:
    void solve(int i, vector<int> &nums, vector<int> &curr, vector<vector<int>> &res){
        if(i == nums.size()){
            res.push_back(curr);
            return;
        }
        curr.push_back(nums[i]);
        solve(i+1, nums, curr, res);
        curr.pop_back();
        solve(i+1, nums, curr, res);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int i = 0;
        vector<int> curr;
        vector<vector<int>> res;

        solve(0, nums, curr, res);
        return res;
    }
};