class Solution {
public:
    int minOperations(string s) {
        int res1 = 0, res2 = 0;
        
        char temp = '0';
        for(int i = 1; i < s.size(); i++){
            if(s[i] == temp) res1++;
            if(temp == '0') temp = '1';
            else temp = '0';
        }
        
        temp = '1';
        for(int i = 1; i < s.size(); i++){
            if(s[i] == temp) res2++;
            if(temp == '0') temp = '1';
            else temp = '0';
        }
        if(s.size() > 1){
            if(s[0] == '1') res1++;
            else res2++;
        }
        cout << res1 << " " << res2 << "\n";
        return min(res1, res2);
    }
};