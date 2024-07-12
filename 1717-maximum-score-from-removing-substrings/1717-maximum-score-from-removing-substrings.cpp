class Solution {
public:
    int calc(string& s, string sub, int& mx, int& mn){
        stack<char> stk;
        int res = 0;
        
         for(int i = 0; i < s.size(); i++){
            if(s[i] == sub[1] && !stk.empty()){
                char top = stk.top();
                if(top == sub[0]){
                    res += mx;
                    stk.pop();
                }else{
                    stk.push(s[i]);
                }
                
            }else{
                stk.push(s[i]);
            }
        }
        
        string temp = "";
        
        while(!stk.empty()){
            temp += stk.top();
            stk.pop();
        }
        
        reverse(temp.begin(), temp.end());
                
        for(int i = 0; i < temp.size(); i++){
            if(temp[i] == sub[0] && !stk.empty()){
                char top = stk.top();
                if(top == sub[1]){
                    res += mn;
                    stk.pop();
                }else{
                    stk.push(temp[i]);
                }
            }else{
                stk.push(temp[i]);
            }
        }
            
        return res;
    }
    
    int maximumGain(string s, int x, int y) {
        if(y > x){
            return calc(s, "ba", y, x); 
        }else{
            return calc(s, "ab", x, y);
        }
        
    }
};