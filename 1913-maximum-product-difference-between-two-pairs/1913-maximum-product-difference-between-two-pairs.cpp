class Solution {
public:
    int maxProductDifference(vector<int>& v) {
        sort(v.rbegin(), v.rend());
        return (v[0] * v[1]) - (v[v.size() - 1] * v[v.size() - 2]);
    }
};