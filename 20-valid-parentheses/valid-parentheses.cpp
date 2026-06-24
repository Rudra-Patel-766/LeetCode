class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto val : s){
            if(val=='(' || val == '{' || val == '['){
                st.push(val);
            }
            else{
                if (st.empty()) {
                    return false;
                }
                
                char top = st.top();
                st.pop();

                if(val==')' && top!='(' || val=='}' && top!='{' || val==']' && top!='['){
                    return false;
                }
            }
        }

        return st.empty();
    }
};