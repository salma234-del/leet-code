class Solution {
public:
    string compressedString(string s) {
        string res = "";
        map<char, int> freq;
        s += '5';
        for(int i = 0; i < s.size() - 1; i++){
            freq[s[i]]++;
            if(s[i] != s[i + 1]){
                int times = freq[s[i]] / 9 + (freq[s[i]] % 9 ? 1 : 0);
                char c = '9';
                while(times > 1){
                    res += c;
                    res += s[i];
                    times--;
                }
                int remain = freq[s[i]] - (freq[s[i]] / 9) * 9;
                if(remain == 0) remain = 9;
                c = remain + '0';
                res += c;
                res += s[i];
                freq[s[i]] = 0;
            }
        }
        return res;
    }
};