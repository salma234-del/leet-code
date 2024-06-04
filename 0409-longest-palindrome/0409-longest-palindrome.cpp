class Solution {
public:
    int longestPalindrome(string s) {
        map<char, int> freq;
        for(int i = 0; i < s.size(); i++){
            freq[s[i]]++;
        }
        int res = 0;
        bool odd = false;
        for(auto& i : freq){
            if(i.second % 2 == 0) res += i.second;
            else{
                res += (i.second - 1);
                odd = true;
            }
        }
        
        return res + odd;
    }
};