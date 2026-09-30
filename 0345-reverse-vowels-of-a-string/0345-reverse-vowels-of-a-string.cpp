class Solution {
public:
    void swap(char& a, char& b){
        char temp = a;
        a = b;
        b = temp;
    }
    bool isVowel(char a){
        char ch = tolower(a);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            return true;
        else
            return false;
    }
    string reverseVowels(string s) {
        
        int n = s.size();
        if(n == 1)
            return s;
        int i = 0, j = n-1;
        while(i < j){
            
            // Move i until vowel is found
            while(i < j && !isVowel(s[i]))
                i++;
            
            // Move j until vowel is found
            while(i < j && !isVowel(s[j]))
                j--;
            
            
            swap(s[i++], s[j--]);
        }
        
        return s;
        
    }
};