class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1 = s1.size();
        int n2 = s2.size();

        if(n1 > n2)
            return false;
        
        unordered_map<char, int> map1;
        unordered_map<char, int> map2;

        for(char s : s1)
            map1[s]++;
        
        int l = 0, r = n1-1;
        int temp = 0;
        while(temp <= r)
            map2[s2[temp++]]++;

        while(r < n2){
            if(map1 == map2)
                return true;
            map2[s2[l]]--;
            if(map2[s2[l]] == 0)
                map2.erase(s2[l]);
            l++;r++;
            if(r < n2)
                map2[s2[r]]++;
        }
        return false;

    }
};