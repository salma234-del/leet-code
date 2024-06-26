class Solution {
public:
    int Mod = 1e9 + 7;
    long long summution(long long n){
        return (n * (n + 1) / 2) % Mod;
    }
    int countHomogenous(string s) {
        s += '7';
        int c = 0 , res = 0;
        for(int i = 0; i < s.size() - 1; i++){
            c++;
            if(s[i] != s[i + 1]){
                res += summution(c);
                c = 0;
            }
        }
        return res;
    }
};