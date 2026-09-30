class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<int> nums;

        for(auto& token : tokens){
            if(token == "+"){
                int n2 = nums[nums.size() - 2];
                int n1 = nums[nums.size() - 1];
                int sum = n1 + n2;
                nums.pop_back();
                nums.pop_back();

                nums.push_back(sum);

            }
            else if(token == "-"){
                int n1 = nums[nums.size() - 1];
                int n2 = nums[nums.size() - 2];
                int diff = n2 - n1;
                nums.pop_back();
                nums.pop_back();

                nums.push_back(diff);
                
            }
            else if(token == "*"){
                int n1 = nums[nums.size() - 1];
                int n2 = nums[nums.size() - 2];
                int prod = n1 * n2;
                nums.pop_back();
                nums.pop_back();

                nums.push_back(prod);
                
            }
            else if(token == "/"){
                int n1 = nums[nums.size() - 1];
                int n2 = nums[nums.size() - 2];
                int quot = n2 / n1;
                nums.pop_back();
                nums.pop_back();

                nums.push_back(quot);
                
            }
            else
                nums.push_back(stoi(token));
        }

        int res = nums[0];

        return res;
        
    }
};