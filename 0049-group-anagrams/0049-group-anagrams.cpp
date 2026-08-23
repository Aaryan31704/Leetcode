class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        int n = strs.size();
        vector<vector<int>> freqs(n, vector<int>(26, 0));

        for(int i = 0; i < n; i++){
            for(auto& ch : strs[i]){
                freqs[i][ch - 'a']++;
            }
        }

        map<vector<int>, vector<string>> groups;

        for(int i = 0; i < n; i++){
            groups[freqs[i]].push_back(strs[i]);
        }

        vector<vector<string>> res;

        for(auto& grp : groups)
            res.push_back(grp.second);

        return res;
        
    }
};