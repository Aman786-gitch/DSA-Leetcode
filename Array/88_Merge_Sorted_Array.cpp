class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        for(int i = 0; i < n; i++) {
            nums1[m + i] = nums2[i];
        }

        for(int i = 1; i < m + n; i++) {

            int temp = nums1[i];

            int j;
            for(j = i - 1; j >= 0 && nums1[j] > temp; j--) {
                nums1[j + 1] = nums1[j];
            }

            nums1[j + 1] = temp;
        }
    }
};