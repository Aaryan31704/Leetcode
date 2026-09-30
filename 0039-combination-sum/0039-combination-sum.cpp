class Solution {
public:
    void solve(int i,int n, int target, vector<int>& curr, vector<vector<int>>& res, vector<int> candidates, int& sum){
        
        if(sum == target){
            res.push_back(curr);
            return;
        }
        if(sum > target){ 
            return;
        }
        while(i < n){
            curr.push_back(candidates[i]);
            sum += candidates[i];
            solve(i, n, target, curr, res, candidates, sum);
            curr.pop_back();
            sum -= candidates[i];
            i++;
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> curr;
        vector<vector<int>> res;
        int n = candidates.size();
        int sum = 0, i = 0;

        solve(i, n, target, curr, res, candidates, sum);
        
        return res;
    }
};