class Solution {
public:
    string reverseVowels(string s) {
        int l = 0, r = s.size() - 1;
        map<char, bool> vis;
        string vol = "aeiouAEIOU";
        for(auto& i : vol) vis[i] = 1;
        
        while(l < r){
            if(vis[s[l]] && vis[s[r]]) swap(s[l], s[r]), l++, r--;
            else if(vis[s[l]]) r--;
            else if(vis[s[r]]) l++;
            else l++, r--;
        }
        
        return s;
    }
};