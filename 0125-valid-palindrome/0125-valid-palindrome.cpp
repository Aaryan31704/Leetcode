class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        if(n == 1)
            return true;
        bool flag = true;
        int l = 0, r = s.size() - 1;
        while(l <= r){
            while(l <=r && (s[l] == ' ' || !isalnum(s[l]))) l++;
            while(r >= l && (s[r] == ' ' || !isalnum(s[r]))) r--;

            if(l > r)
                break;

            if(tolower(s[l]) == tolower(s[r])){
                l++;r--;
                continue;
            }
            else{
                flag = false;
                break;
            }
            l++;r--;
        }
        return flag;
        
    }
};