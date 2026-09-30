class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st;
        int j = 0;

        for(auto& num : pushed){
            st.push(num);
        
            while(!st.empty() && j < popped.size() && st.top() == popped[j]){
                
                st.pop();
                j++;
                
            }
        }
        if(st.empty())
            return true;
        else
            return false;
    }
};