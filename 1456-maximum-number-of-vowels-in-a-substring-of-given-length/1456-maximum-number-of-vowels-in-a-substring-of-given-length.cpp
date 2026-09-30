class Solution {
public:
    bool is_vowel(char ch){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            return true;
        return false;
    }

    int maxVowels(string s, int k) {
        int n = s.size();
        int l = 0, r = k-1, max_v = 0, count=0;
        int i = 0;
        while(i <= r){
            if(is_vowel(s[i++]))
                count++;
        }
        max_v = max(max_v, count);
        if(r < n-1){
            r++;
            if(is_vowel(s[r]))
                count++;
        }
        if(is_vowel(s[l]))
            count--;
        l++;
        max_v = max(max_v, count);
        while(l < (n-k)){
            if(r < n-1){
                r++;
                if(is_vowel(s[r]))
                    count++;
            }
            if(is_vowel(s[l]))
                count--;
            l++;
            max_v = max(max_v, count);
        }
        return max_v;
    }
};