class Solution {
public:
    string longestCommonPrefix(vector<string>& v) {
        string temp = "" , res = "";
        map<int, string> mp;
    
        for(int j = 0; j < v[0].size(); j++){
            temp += v[0][j];
            bool f = true;
            for(int k = 1; k < v.size(); k++){
                if(j < v[k].size()) mp[k] += v[k][j];
                if(mp[k] != temp) {
                    f = false;
                }
            }
            if(f) res = temp;
        }
        
        return res;
    }
};