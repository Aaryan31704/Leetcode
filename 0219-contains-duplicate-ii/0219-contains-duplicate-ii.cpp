class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int l = 0;
        int r = min(k, (int)nums.size()-1);

        int n = nums.size();
        set<int> s;
        for(int i = l; i <= r;i++){
            if(s.contains(nums[i]))
                return true;
            s.insert(nums[i]);
        }
        l++;r++;
        
        while(l < (n-k) && r < n){
            s.erase(nums[l-1]);
            if(s.contains(nums[r]))
                return true;
            s.insert(nums[r]);
            l++;r++;
        }
        return false;
        
    }
};