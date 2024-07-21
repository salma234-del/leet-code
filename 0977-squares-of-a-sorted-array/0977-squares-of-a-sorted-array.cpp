class Solution {
public:
    vector<int> sortedSquares(vector<int>& v) {
        vector<int> res;
        for(int i = 0; i < v.size(); i++){
            res.push_back(v[i] * v[i]);
        }
        
        sort(res.begin(), res.end());
        return res;
        
    }
};