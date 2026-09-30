class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if(p.size() > s.size())
            return {};
        int l = 0, r = p.size()-1;
        unordered_map<char, int> p_map;
        for(char c : p)
            p_map[c]++;
        int n = s.size();

        vector<int> res;

        unordered_map<char, int> win_map;
        for(int i = l; i <= r; i++)
            win_map[s[i]]++;
        while(l <= (n - p.size())){
            if(win_map == p_map){
                res.push_back(l);
            }
            win_map[s[l]]--;
            if(win_map[s[l]] == 0)
                win_map.erase(s[l]);
            l++; 
            r++;
            if(r < n)
                win_map[s[r]]++;

        }
        return res;
    }
};