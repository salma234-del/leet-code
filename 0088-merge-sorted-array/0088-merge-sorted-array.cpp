class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       
        vector<int> res;
        int l = 0 , r = 0;
        
        while(l < m && r < n){
            if(nums1[l] < nums2[r]) res.push_back(nums1[l++]);
            else if(nums1[l] > nums2[r]) res.push_back(nums2[r++]);
            else res.push_back(nums1[l++]), res.push_back(nums2[r++]);
        }
        
        for(int i = l; i < m; i++) res.push_back(nums1[i]);
        for(int i = r; i < n; i++) res.push_back(nums2[i]);
        
        nums1 = res;

        for(auto& i : res) cout << i << " ";
    }
};