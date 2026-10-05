class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> st;
        st.push(0);
        for(auto val:s){
            if(val=='('){
                st.push(0);
            }
            else{
                if(st.empty()){
                    return 0;
                }

                int i=st.top();
                st.pop();

                int score=0;
                if(i==0){
                    score=1;
                }
                else{
                    score=2*i;
                }

                st.top()+=score;
            }
        }

        return st.top();
    }
};