class Solution {
public:
    void solve(vector<int> nums, int n, vector<int> &curr, vector<vector<int>> &res, vector<int> &mark){
        if(curr.size() == n){
            res.push_back(curr);
            return;
        }

        for(int i = 0; i < nums.size(); i++){
            if(mark[i] == 1)
                continue;
            mark[i] = 1;

            curr.push_back(nums[i]);
            solve(nums, n, curr, res, mark);
            curr.pop_back();
            mark[i] = 0;
        }    



    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> curr;
        vector<vector<int>> res;
        int n = nums.size();
        vector<int> mark(n, 0);
        solve(nums, n, curr, res, mark);

        return res;

    }
};