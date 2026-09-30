class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> freq;
        bool flag_l = false, flag_o = false;
        for(char ch : text){
            freq[ch]++;
        }

        return min({freq['b'], freq['a'], freq['l'] / 2, freq['o'] / 2, freq['n']});
    }
};