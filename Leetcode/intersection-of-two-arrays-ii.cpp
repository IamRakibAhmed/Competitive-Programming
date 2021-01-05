class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        multimap<int, int> mp;
        multimap<int, int>::iterator it;
        for (int i = 0; i < nums1.size(); i++) mp.insert({nums1[i], i});
        
        vector<int> res;
        for (int i = 0; i < nums2.size(); i++) {
            it = mp.find(nums2[i]);
            if (mp.end() != it) {
                mp.erase(it);
                res.push_back(nums2[i]);
            }
        }
        return res;
    }
};