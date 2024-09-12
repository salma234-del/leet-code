class Solution {
public:
    int countConsistentStrings(string s, vector<string>& v) {
        map<char, bool> vis;
        for(auto& i : s){
            vis[i] = true;
        }
        int res = 0;
        for(int i = 0; i < v.size(); i++){
            bool f = true;
            for(int j = 0; j < v[i].size(); j++){
                if(!vis[v[i][j]]){
                    f = false;
                    break;
                }
            }
            res += f;
        }
        return res;
    }
};