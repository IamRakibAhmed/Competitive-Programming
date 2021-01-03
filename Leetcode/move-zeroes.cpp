class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int c = 0;
        for (auto i : nums) if (i == 0) c++;
        nums.erase(remove(nums.begin(), nums.end(), 0), nums.end());
        for (int i = 1; i <= c; i++) nums.push_back(0);
    }
};