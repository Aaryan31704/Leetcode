class Solution {
public:
    int binary_search(vector<int>& arr, int x){
        int lb = 0, ub = arr.size() - 1, mid;
        while(lb <= ub){
            mid = lb + (ub - lb) / 2;
            if(arr[mid] == x)
                return mid;
            else if(arr[mid] > x)
                ub = mid - 1;
            else
                lb = mid + 1;            
        }
        return lb;
    }
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int idx, n = arr.size()-1;
        vector<int> res;

        idx = binary_search(arr, x);
        
        int left = idx - 1;
        int right = idx;

        if(left < 0){
            int i = 0;
            while(k > 0){
                res.push_back(arr[i++]);
                k--;
            }
            return res;
        }
        if(right > n){
            int i = n;
            while(k > 0){
                res.push_back(arr[i--]);
                k--;
            }
            sort(res.begin(), res.end());
            return res;
        }

        while(k > 0){
            
            if(left >=0 && abs(x - arr[left]) <= abs(x - arr[right])){
                res.push_back(arr[left]);
                k--;
                left--;
            }
            else{
                if(right <= n){
                    res.push_back(arr[right]);
                    k--;
                    right++;
                }
            }
        }

        sort(res.begin(), res.end());
        return res;
    }
};