class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string s = "123456789";
        int n = s.length();
        vector<int> ans;
        for(int i=0;i<n;i++){
            for(int j=1;j<=n-i;j++){
                string t = s.substr(i,j);
                int num = stoi(t);

                if(num>=low && num<=high){
                    ans.push_back(num);
                }
            }
        }

        sort(ans.begin(),ans.end());
        return ans;
    }
};