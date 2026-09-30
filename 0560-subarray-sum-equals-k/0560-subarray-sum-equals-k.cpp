class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        int pre_sum = 0;
        int count = 0;
        int need = 0;

        freq[0] = 1;

        for(int &num : nums){
            pre_sum += num;
            need = pre_sum - k;
            if(freq.contains(need))
                count= count + freq[need];
            freq[pre_sum]++;
        }
        return count;
    }
};