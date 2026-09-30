class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        
        if(n == 1)
            return 1;

        int l = 0, r = 0;
        int max_len = 0, max_freq = 0;
        vector<int> freq(26, 0);
    
        while(r < n){
            freq[s[r]-'A']++;
            
            
            auto max_it = std::max_element(freq.begin(), freq.end());
            
            int max_val = *max_it;
            int length = r - l + 1;
            int rem = length - max_val;

            if(rem <= k){
                max_len = max(max_len, r - l + 1);
                
            }
            else{
                while(rem > k){
                    freq[s[l]-'A']--;
                    
                    auto max_it = std::max_element(freq.begin(), freq.end());
                    
                    l++;
                    rem = (r-l+1) - *max_it;
                }
                max_len = max(max_len, r - l + 1);
            }
            r++;
        }
        return max_len;

    }
};