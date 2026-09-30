class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        string word = "";

        for(int i = 0; i < s.size(); i++){
            if(s[i] == ' '){
                words.push_back(word);
                word = "";
                continue;
            }
            word.push_back(s[i]);
        }
        words.push_back(word);

        if(words.size() != pattern.size())
            return false;
        
        unordered_map<char, string> fmap;
        unordered_map<string, char> bmap;

        for(int i = 0; i < words.size(); i++){
            auto it1 = fmap.find(pattern[i]);
            auto it2 = bmap.find(words[i]);
            if(it1 != fmap.end() && it1->second != words[i])
                return false;
            if(it2 != bmap.end() && it2->second != pattern[i])
                return false;
            
            fmap[pattern[i]] = words[i];
            bmap[words[i]] = pattern[i];
        }

        return true;
    }
};