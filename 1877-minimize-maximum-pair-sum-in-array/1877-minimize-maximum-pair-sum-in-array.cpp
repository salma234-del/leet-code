class Solution {
public:
    int minPairSum(vector<int>& v) {
        sort(v.begin(), v.end());
        int l = 0 , r = v.size() - 1 , mx = 0;
        while(l < r){
            mx = max(mx , v[l++] + v[r--]);
        }
        return mx;
    }
};