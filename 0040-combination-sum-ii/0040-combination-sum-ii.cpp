class Solution {
public:
    void solve(int i, vector<int>& curr, vector<vector<int>>& res, int n, int target, vector<int>& candidates, int& sum){
        if(sum == target){
            res.push_back(curr);
            return;
        }
        if(sum > target)
            return;
        
        while(i < n){
            if(sum + candidates[i] > target)
                break;
            curr.push_back(candidates[i]);
            sum += candidates[i];
            solve(i+1, curr, res, n, target, candidates, sum);
            curr.pop_back();
            sum -= candidates[i];
            i++;
            while(i < n && candidates[i] == candidates[i-1]){
                i++;
            }
            
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int> curr;
        vector<vector<int>> res;
        int sum = 0;
        int n = candidates.size();
        solve(0, curr, res, n, target, candidates, sum);

        return res;
    }
};