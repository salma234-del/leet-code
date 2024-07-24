class Solution {
public:
    vector<string> v;
    void solve(int idx, string s, int n){
        if(idx > n * 2) return;
        if(idx == n * 2){
            v.push_back(s);
            s.clear();
            return ;
        }
        
        s.push_back('(');
        solve(idx + 1 , s, n);
        s.pop_back();
        
        s.push_back(')');
        solve(idx + 1, s, n);
        s.pop_back();
        
    }
    bool check(string& s){
        stack<char> stk;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == ')'){
                if(!stk.empty()){
                    stk.pop();
                }else{
                    return false;
                }
            }else{
                stk.push(s[i]);
            }
        }
        return stk.size() == 0;
    }
    vector<string> generateParenthesis(int n) {
        string s = "";
        solve(0, s, n);
        vector<string> res;
        for(auto& i : v){
            if(check(i)) res.push_back(i);
        }
        return res;
    }
};