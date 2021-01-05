class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num == 1) return true;
        if (num < 4) return false;
        
        int l = 1, r = num;
        long long mid;
        while (l <= r) {
            mid = l + (r - l) / 2;
            if (mid * mid == num) return true;
            else if (mid * mid > num) r = mid - 1;
            else l = mid + 1;
        }
        
        return false;
    }
};