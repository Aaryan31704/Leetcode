class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        
        int n = arr.size();
        if(n == 1)
            return {-1};

        int i = n - 1;
        int max_val = arr[i];
        arr[i--] = -1;

        while(i >= 0){
            int orr = arr[i];
            arr[i--] = max_val;
            max_val = max(orr, max_val);
        }

        return arr;
    }
};