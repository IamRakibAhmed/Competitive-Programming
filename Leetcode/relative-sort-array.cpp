class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> res(1001, 0), ans;
        for (auto i : arr1) res[i]++;
        for (int i = 0; i < arr2.size(); i++) {
            while (res[arr2[i]] > 0) {
                ans.push_back(arr2[i]);
                res[arr2[i]]--;
            }
        }
        for (int i = 0; i < res.size(); i++) {
            while (res[i] > 0) {
                ans.push_back(i);
                res[i]--;
            }
        }
        
        return ans;
    }
};