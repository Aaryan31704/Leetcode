class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        
        int n = nums.size();
        nums.resize(2*n);

        int i = 0;
        while(i < n){
            nums[i + n] = nums[i];
            i++;
        }
        return nums;
    }
};