class Solution {
public:
    int totalFruit(vector<int>& fruits) {

        int n = fruits.size();
        
        if(n == 1 || n == 2)
            return n;
        
        int max_len = 0;
        unordered_map<int, int> freq;
        int l = 0, r = 1;
        freq[fruits[l]]++;
        freq[fruits[r]]++;

        max_len = max(max_len, r-l+1);

        while(r < n-1){
            r++;
            freq[fruits[r]]++;
            while(l < r && freq.size() > 2){
                freq[fruits[l]]--;
                if(freq[fruits[l]] == 0)
                    freq.erase(fruits[l]);
                l++;
            }
            max_len = max(max_len, r-l+1);
            
        }
        return max_len;
    }
};