
class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num < 2) {
            return true;
        }

        int s = 1, e = num / 2;

        while (s <= e) {
            int mid = s + (e - s) / 2;
            long long square = 1LL * mid * mid;

            if (square == num) {
                return true;
            }
            else if (square > num) {
                e = mid - 1;
            }
            else {
                s = mid + 1;
            }
        }

        return false;
    }
};
