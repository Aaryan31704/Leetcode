class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto &ch : s){
            if(ch == '(' || ch == '{' || ch == '[')
                st.push(ch);
            
            if(ch == ')' || ch == '}' || ch == ']'){
                if(st.empty())
                    return false;
                char tp = st.top();
                if((ch == ')' && tp != '(') || (ch == '}' && tp != '{') || (ch == ']' && tp != '['))
                    return false;
                
                st.pop();
            }
        }
        if(st.empty())
            return true;
        else 
            return false;
    }
};