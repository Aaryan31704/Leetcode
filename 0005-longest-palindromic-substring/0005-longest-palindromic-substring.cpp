class Solution {
public:
    
    string longestPalindrome(string s) {
        int i = 0, n = s.size();
        string ss="";
        int length= 0;
        int low = 0, high = 0;
        if(n == 1)
            return s;

        for(i=1; i <= n-1; i++){
            
            // For Odd length strings
            low = high = i;
            while(low >= 0 && high < n && s[low] == s[high]){
                low--;high++;
            
                if(low < 0 and high >= n)
                    break;
            }
            string pal = s.substr(low+1, high-low-1);

            if(pal.length() > ss.length())
                ss = pal;

            // For Even length strings
            low = i-1;
            high = i;
            while(low >= 0 && high < n && s[low] == s[high]){
                low--;high++;
            
                if(low < 0 and high >= n)
                    break;
            }
            pal = s.substr(low+1, high-low-1);

            if(pal.length() > ss.length())
                ss = pal;
        }

        return ss;
    }
};