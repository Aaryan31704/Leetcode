class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        int needed;
        vector<int> res;

        for(int i = 0; i < nums.size(); i++){
            needed = target - nums[i];
            if(m.find(needed) != m.end()){
                res.push_back(i);
                res.push_back(m[needed]);
                return res;
            }
            m[nums[i]] = i;
        }
        return {};
    }
    
};