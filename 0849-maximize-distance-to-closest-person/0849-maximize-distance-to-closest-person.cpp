class Solution {
public:
    int maxDistToClosest(vector<int>& v) {
        vector<int> ones;
        for(int i = 0; i < v.size(); i++){
            if(v[i] == 1) ones.push_back(i);
        }
        int res = 0;
        for(int i = 0; i < v.size(); i++){
            if(v[i] == 0){
                int left = INT_MAX, right = INT_MAX;
                auto it = upper_bound(ones.begin(), ones.end(), i);
                if(it != ones.end()) left = *it;
                it--;
                if(it - ones.begin() != - 1){
                    right = *it;
                }
                
                res = max(res, min(abs(i - left), abs(i - right)));
            }
        }
        return res;
    }
};