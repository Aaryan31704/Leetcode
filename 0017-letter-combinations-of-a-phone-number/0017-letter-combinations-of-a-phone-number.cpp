class Solution {
public:
    void solve(int i, int n, string digits, unordered_map<char, string> mp, vector<string>& res, string& curr){
        if(curr.size() == n){
            res.push_back(curr);
            return;
        }
        
        char curr_digit = digits[i];
        string curr_str = mp[curr_digit];

        for(char ch : curr_str){                
            curr.push_back(ch);
            solve(i+1, n, digits, mp, res, curr);
            curr.pop_back();
        }          
    }
    vector<string> letterCombinations(string digits) {
        string curr = "";
        vector<string> res;
        
        unordered_map<char, string> mp {
            {'0', ""},
            {'1', ""},
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}
        };

        int n = digits.size();

        solve(0, n, digits, mp, res, curr);

        return res;
    }

};