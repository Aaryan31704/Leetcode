#include<string.h>
class Solution {
public:
    int compress(vector<char>& chars) {
        string s="";
        int n = chars.size();
        if(n == 1)
            return 1;

        int i=0;
        while(i < n){
            int j = i;
            while(j < n && chars[j] == chars[i])
                j++;
            s.push_back(chars[i]);
            if(j-i > 1)
                s.append(to_string(j-i));
            i = j;
        }

        i = 0;
        for(auto ch : s)
            chars[i++] = ch;
        
        return s.size();
    }
};