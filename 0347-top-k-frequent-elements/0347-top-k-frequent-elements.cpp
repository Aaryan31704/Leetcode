class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> freq;
        for(int &num : nums){
            freq[num]++;
        }

        vector<vector<int>> bucket(nums.size() + 1);
        vector<int> res;

        for(auto &[key, value] : freq)
            bucket[value].push_back(key);
        
        for(int i = bucket.size() - 1; i >= 0; i--){
            for(int &num : bucket[i]){
                res.push_back(num);
                if(res.size() == k)
                    return res;
                
            }
        }
        return{};

        
    

    }
};