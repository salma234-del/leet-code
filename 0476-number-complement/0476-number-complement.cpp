class Solution {
public:
    int findComplement(int n) {
        string b = "";
        while(n){
            if(n % 2) b = '1' + b;
            else b = '0' + b;
            n /= 2;
        }
        for(int i = 0; i < b.size(); i++){
            if(b[i] == '1') b[i] = '0';
            else b[i] = '1';
        }
        
        int res = 0;
        for(int i = b.size() - 1; i >= 0; i--){
            if(b[i] == '1') res += (1 << (b.size() - i - 1));
        }
        return res;
    }
};