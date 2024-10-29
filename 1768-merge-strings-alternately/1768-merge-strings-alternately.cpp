class Solution {
public:
    string mergeAlternately(string a, string b) {
        int i = 0, j = 0;
        string res = "";
        while(i < a.size() && j < b.size()){
            res += a[i++];
            res += b[j++];
        }
        
        while(i < a.size()) res += a[i++];
        while(j < b.size()) res += b[j++];
        
        return res;
    }
};