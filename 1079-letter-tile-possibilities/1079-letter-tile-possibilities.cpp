class Solution {
public:
    set<string> res;
    string temp = "";
    void solve(int idx, string& s){
        if(idx >= s.size()){
            if(temp != "")
                res.insert(temp);
            return;
        }
        
        temp.push_back(s[idx]);
        solve(idx + 1, s);
        temp.pop_back();   
        solve(idx + 1, s);
    }
    
    int numTilePossibilities(string s) {
        sort(s.begin(), s.end());
        
        do{
            solve(0, s);
        }while(next_permutation(s.begin(), s.end()));
        
       
        return res.size();
    }
};