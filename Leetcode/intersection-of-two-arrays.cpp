class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
        HashSet<Integer> s1 = new HashSet<>();
        HashSet<Integer> s2 = new HashSet<>();
        
        for (int i : nums1) s1.add(i);
        for (int i : nums2) {
            if (s1.contains(i)) s2.add(i);
        }
        
        int[] res = new int[s2.size()];
        int idx = 0;
        for (int i : s2) {
            res[idx] = i;
            idx++;
        }
        
        return res;
    }
}