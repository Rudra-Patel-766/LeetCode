class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int left=0;
        int right=height.size()-1;

        int maxValue = 0;

        while(left<right){
            int area = (right - left) * min(height[left], height[right]);

            maxValue = max(maxValue,area);

            if(height[left]<height[right]){
                left++;
            }

            else{
                right--;
            }
        }

        return maxValue;
    }
};
