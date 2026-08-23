class Solution {
public:
    void swap(int &a, int &b){
        int temp = a;
        a = b;
        b = temp;
    }
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();

        if(n == 1)
            return;
        
        int i = 0, j;
        while(i < n){
            while(i < n && nums[i] != 0)
                i++;
            if(i == n)
                break;
            if(i < n)
                j = i + 1;
            while(j < n && nums[j] == 0)
                j++;
            if(j == n)
                break;
            swap(nums[i], nums[j]);

        }
        return;
    }
};