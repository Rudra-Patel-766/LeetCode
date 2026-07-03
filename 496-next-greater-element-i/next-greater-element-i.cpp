class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();

        vector<int> ans;

        for(int i=0;i<n1;i++){
            int j=0;
            while(nums2[j]!=nums1[i]){
                j++;
            }

            bool found = false;
            for(int k=j+1;k<n2;k++){
                if(nums2[k]>nums2[j]){
                    ans.push_back(nums2[k]);
                    found = true;
                    break;
                }
            }

            if(!found){
                ans.push_back(-1);
            }
        }

        return ans;
    }
};