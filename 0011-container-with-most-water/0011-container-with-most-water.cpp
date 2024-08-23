class Solution {
public:
    int maxArea(vector<int>& v) {
        int l = 0, r = v.size() - 1;
        int res = 0;
        while(l < r){
            int x = min(v[l], v[r]) * (r - l);
            res = max(res, x);
            if(v[l] < v[r]) l++;
            else if(v[l] > v[r] ) r--;
            else l++, r--;
          
        }
        return res;
    }
};