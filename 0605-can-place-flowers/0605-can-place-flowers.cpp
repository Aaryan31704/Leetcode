class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
        if(n == 0)
            return true;
        if(flowerbed.size() == 1 && flowerbed[0] == 0 && n == 1)
            return true;
        if(flowerbed.size() == 1 && flowerbed[0] == 1 && n == 1)
            return false;
    
        int count = 0;
        int i = 0;
        if(flowerbed[i+1] == 0 && flowerbed[i] == 0){
            count++;
            flowerbed[0] = 1;
        }
        for(i = 1; i < flowerbed.size() - 1; i++){
            if(flowerbed[i] == 1)
                continue;
            else{
                if(flowerbed[i-1] == 0 && flowerbed[i+1] == 0){
                    flowerbed[i] = 1;
                    count++;
                }
                else
                    continue;
            }
        }

        if(flowerbed[i-1] == 0 && flowerbed[i] == 0)
            count++;

        if(count >= n)
            return true;
        else
            return false;

        
    }
};