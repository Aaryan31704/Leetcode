class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {

        if(arr.size() == 1){
            arr[0] = -1;
            return arr;
        }
        
        
        int i = arr.size() - 1;
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