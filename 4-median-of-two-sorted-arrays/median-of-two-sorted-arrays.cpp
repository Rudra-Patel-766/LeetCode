class Solution {
public:
    void merge(vector<int>& arr, int l, int m, int r) {
        vector<int> L, R;
        for (int i=l; i<=m; i++) {
            L.push_back(arr[i]);
        }

        for (int i=m+1; i<=r; i++) {
            R.push_back(arr[i]);
        }

        int i=0, j=0, k=l;
        while (i < L.size() && j < R.size()) {
            if (L[i] <= R[j]) {
                arr[k] = L[i];
                i++;
            } else {
                arr[k] = R[j];
                j++;
            }

            k++;
        }

        while (i < L.size()) {
            arr[k] = L[i];
            i++;
            k++;
        }

        while (j < R.size()) {
            arr[k] = R[j];
            j++;
            k++;
        }
    }

    void merge_sort(vector<int>& arr, int l, int r) {
        if (l < r) {
            int m = l + (r - l) / 2;

            merge_sort(arr, l, m);
            merge_sort(arr, m + 1, r);

            merge(arr, l, m, r);
        }
    }

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double med;
        for (auto val : nums2) {
            nums1.push_back(val);
        }

        merge_sort(nums1,0,nums1.size()-1);

        int n=nums1.size();
        if(n%2!=0){
            med=nums1[n/2];
        }

        else{
            med=((nums1[((n/2)-1)]+nums1[n/2])/2.0);
        }

        return med;
    }
};