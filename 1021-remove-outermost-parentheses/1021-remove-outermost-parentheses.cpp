class Solution {
public:
    string removeOuterParentheses(string s) {
        vector<string> v;
        stack<char> stk;
        string temp = "";
        s += " ";
        for(int i = 0; i < s.size(); i++){
            if(stk.empty()){
                v.push_back(temp);
                temp = "";
            }
           temp += s[i];
           if(s[i] == ')'){
               if(!stk.empty()){
                   stk.pop();
               }
           }else{
               stk.push(s[i]);
           }
        }
        
        string res = "";
        for(auto& i : v){
          if(i != ""){
              string ss = i.substr(1, i.size());
              ss.pop_back();
              res += ss;
          }
        }
        
        return res;
    }
};