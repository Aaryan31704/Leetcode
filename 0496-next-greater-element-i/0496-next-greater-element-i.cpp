class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        for(auto &num:nums1){
            int i = 0;
            while(num != nums2[i])
                i++;
            int idx = i + 1;
            bool found = false;
            while(idx < nums2.size()){
                if(nums2[idx] > num){
                    res.push_back(nums2[idx++]);
                    found = true;
                    break;
                }
                idx++;
            }
            if(found == false)
                res.push_back(-1);
        }
        return res;
        
    }
};