class Solution {
public:
    void backtrack(int open, int close, int n, vector<string>& res, string& comb){
        if(open == n && close == n){
            res.push_back(comb);
            return;
        }
        
        if(open < n){
            comb.push_back('(');
            backtrack(open+1, close, n, res, comb);
            comb.pop_back();
        }
        if(close < open){
            comb.push_back(')');
            backtrack(open, close+1, n, res, comb);
            comb.pop_back();
        }

    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string comb = "";
        int open = 0, close = 0;

        backtrack(open, close, n, res, comb);

        return res;
    }
};