class Solution {
public:
    void swap(int& a, int& b){
        int temp = a;
        a = b;
        b = temp;
    }

    void sortColors(vector<int>& nums) {
        int l = 0, m = 0, h = nums.size()-1;

        while(m <= h){
            if(nums[m] == 1)
                m++;
            else if(nums[m] == 0){
                swap(nums[m++], nums[l++]);
            }
            else
                swap(nums[m], nums[h--]);
        }

        
    }
};