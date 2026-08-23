class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        if(s.size() != t.size())
            return false;
        
        unordered_map<char, char> fmap;
        unordered_map<char, char> bmap;

        for(int i = 0; i < s.size(); i++){
            char ch_S = s[i], ch_T = t[i];

            if((fmap.find(ch_S) != fmap.end()) || (bmap.find(ch_T) != bmap.end())){
                if(fmap[ch_S] == t[i] && bmap[ch_T] == s[i]){
                    continue;
                }
                else
                    return false;
            }
            fmap[ch_S] = t[i];
            bmap[ch_T] = s[i];
        }
        return true;
        
    }
};