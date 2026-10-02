class Solution {
public:
    int mySqrt(int x) {
        int l = 0, h = x/2;

        if(x == 1)
            return 1;
        while(l <= h){
            double mid = l + (h - l) / 2;
            double sqrt = mid*mid;
            if(sqrt == x)
                return mid;
            else if(sqrt < x)
                l = mid + 1;
            else
                h = mid - 1;
        }
        if(h < l)   
            return h;
        return l;
    }
};