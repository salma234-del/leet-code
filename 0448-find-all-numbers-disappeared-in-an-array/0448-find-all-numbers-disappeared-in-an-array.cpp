class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& v) {
        vector<int> res;
        int c = 1;
        map<int, bool> vis;
        for(int i = 0; i < v.size(); i++) vis[v[i]] = 1;
        while(c <= v.size()){
            if(!vis[c]) res.push_back(c);
            c++;
        }
        return res;
    }
};