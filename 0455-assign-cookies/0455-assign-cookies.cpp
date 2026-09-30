class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int i=0, j=0;
        int n_g = g.size();
        int n_s = s.size();
        while(i < n_g && j < n_s){
            if(s[j] >= g[i]){
                i++;
                j++;
            }
            else
                j++;
        }
        return i;
        
    }
};