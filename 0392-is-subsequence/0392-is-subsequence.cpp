class Solution {
public:
    bool isSubsequence(string s, string t) {
        auto s_p = s.begin();
        auto t_p = t.begin();
        
        int count = 0;

        while(t_p != t.end()){
            if(*s_p == *t_p){
                count++;
                s_p++;
                t_p++;
            }
            else
                t_p++;
        }
        if(s.size() == count)
            return true;
        else
            return false;
    }
};