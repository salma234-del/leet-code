class Solution {
public:
    int heightChecker(vector<int>& v) {
        vector<int> sorted = v;
        sort(sorted.begin(), sorted.end());
        int res = 0;
        for(int i = 0; i < v.size(); i++){
            res += v[i] != sorted[i];
        }
        
        return res;
    }
};