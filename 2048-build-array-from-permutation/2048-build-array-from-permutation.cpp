class Solution {
public:
    vector<int> buildArray(vector<int>& v) {
        vector<int> res;
        for(int i = 0; i < v.size(); i++){
            res.push_back(v[v[i]]);
        }
        return res;
    }
};