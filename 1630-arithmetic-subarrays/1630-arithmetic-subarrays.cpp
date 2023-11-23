class Solution {
public:
    bool good(vector<int> v , int l, int r){
        sort(v.begin() + l , v.begin() + r + 1);
        int diff = v[l + 1] - v[l];
        for(int i = l + 1; i < r; i++){
            if(v[i + 1] - v[i] != diff) return false;
        }
        return true;
    }
    vector<bool> checkArithmeticSubarrays(vector<int>& v, vector<int>& l, vector<int>& r) {
        vector<bool> res;
       
        for(int i = 0; i < l.size(); i++){
            res.push_back(good(v , l[i] , r[i]));
        }
        
        return res;
    }
};