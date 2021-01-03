class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        string str = "";
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != val) str += nums[i] + '0';
        }
        nums.clear();
        for (char i : str) nums.push_back(i - '0');
        return nums.size();
    }
};