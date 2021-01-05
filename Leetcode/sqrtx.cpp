class Solution {
public:
    int mySqrt(int x) {
        if (x < 2) return x;
        long long l = 1, r = x, mid;
        while (l < r) {
            mid = l + (r - l) / 2;
            if (mid * mid == x || (mid * mid < x && (mid + 1) * (mid + 1) > x))
                return mid;
            else if (mid * mid < x) l = mid;
            else r = mid;
        }
        
        return mid;
    }
};