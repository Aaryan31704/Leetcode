class Solution {
public:
    string removeStars(string s) {

        vector<char> st;
        string res = "";

        for(auto& ch : s){
            if(ch == '*')
                st.pop_back();
            else
                st.push_back(ch);
        }

        for(auto& ch : st)
            res.push_back(ch);

        return res;

        
    }
};