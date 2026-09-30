class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        int l=seq.length();
        int depth=0;
        vector<int> ans;

        for(int i=0;i<l;i++){
           if(seq[i]=='('){
            depth++;
            ans.push_back(depth%2);
           } 
           else{
            ans.push_back(depth%2);
            depth--;
           }
        }

        return ans;
    }
};