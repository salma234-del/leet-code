class Solution {
public:
    int BS(vector<int>& v){
        int l = 0, r = 1e9, best = 0;
        while(l <= r){
            int m = l + (r - l) / 2;
            (good(v, m) ? l = m + 1, best = m : r = m - 1);
            
        }
        return best;
    }
    
    bool good(vector<int>& v, int m){
        int c = 0;
        for(int i = 0; i < v.size(); i++){
            c += (v[i] >= m);
        }
        return c >= m;
    }
    int hIndex(vector<int>& v) {
        return BS(v);
    }
};