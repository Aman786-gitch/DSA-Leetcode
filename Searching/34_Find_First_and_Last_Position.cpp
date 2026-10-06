class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int first = -1;
        int last = -1;

        // Find first occurrence
        int s = 0;
        int e = nums.size() - 1;

        while(s <= e) {
            int mid = (s + e) / 2;

            if(nums[mid] == target) {
                first = mid;
                e = mid - 1;       
            }
            else if(nums[mid] < target) {
                s = mid + 1;
            }
            else {
                e = mid - 1;
            }
        }

        // Find last occurrence
        s = 0;
        e = nums.size() - 1;

        while(s <= e) {
            int mid = (s + e) / 2;

            if(nums[mid] == target) {
                last = mid;
                s = mid + 1;      
            }
            else if(nums[mid] < target) {
                s = mid + 1;
            }
            else {
                e = mid - 1;
            }
        }

        return {first, last};
    }
};