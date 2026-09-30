class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        if(n == 1 || n == 0)
            return n;
        int l = 0, r = 1, count = 1;
        int max_count = 0;
        unordered_set<char> ss;
        ss.insert(s[l]);
        
        while(r < n){
            while(r < n && !ss.contains(s[r])){
                ss.insert(s[r]);
                count++;
                r++;
                max_count = max(max_count, count); 
            }
            while(r < n && ss.contains(s[r])){
                           
                ss.erase(s[l]);
                l++;
                count--;
                
            }
        }
        return max_count;
    }
};