class Solution {
public:
    int strStr(string haystack, string needle) {
        int n_size = needle.size();
        int h_size = haystack.size();
    

        if(n_size > h_size)
            return -1;
        int i = 0, j = 0;
        while(i <= (h_size - n_size)){

            if(haystack[i] != needle[0]){
                i++;
                continue;
            }
            j = 0;
            while(j < n_size){
                if(needle[j] == haystack[j+i])
                    j++;
                else
                    break;
                
            }
            if(j == n_size)
                return i;
            i++;
        }
        return -1;
        
    }
};