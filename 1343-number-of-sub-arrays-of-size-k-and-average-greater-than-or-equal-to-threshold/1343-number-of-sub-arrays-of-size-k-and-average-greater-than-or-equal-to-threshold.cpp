class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int l = 0, r = k-1;
        int sum = 0, count = 0, avg = 0;
        int n = arr.size();
        for(int i = l; i <= r; i++)
            sum += arr[i];
        avg = sum / k;
        if(avg >= threshold)
            count++;
        
        while(r < n-1){
            sum -= arr[l];
            l++;r++;
            sum += arr[r];
            avg = sum / k;

            if(avg >= threshold)
                count++;
        }
        return count;
        
    }
};