
class Solution {
public:
    int mySqrt(int x) {
        int s = 1, e = x / 2;

        if (x < 2){
         return x;
        }
        while (s <= e) {
            int mid = s + (e - s) / 2;

            if (mid <= x / mid) {
                s = mid + 1;
            }
            else {
                e = mid - 1;
            }
        }

        return e;
    }
};