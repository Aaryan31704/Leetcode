class Solution {
public:
    string reverseWords(string s) {
        int i = s.size()-1;
        string res = "";
        while(i >= 0){
            while(i >= 0 && s[i] == ' ')
                i--;
            if(i < 0)
                break;
            int j = i;
            while(j >= 0 && s[j] != ' ')
                j--;
            res.append(s.substr(j+1, i-j));
            res.push_back(' ');
            i = j;
        }
        if(!res.empty())
            res.resize(res.size() - 1);
        return res;
        
    }
};