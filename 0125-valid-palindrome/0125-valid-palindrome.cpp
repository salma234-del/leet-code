class Solution {
public:
    bool isPalindrome(string s) {
        string temp = "";
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        for(int i = 0; i < s.size(); i++){
            if(isalpha(s[i]) || isdigit(s[i])) temp += s[i];
        }
        
        int l = 0, r = temp.size() - 1;
        while(l < r){
            if(temp[l] != temp[r]) return false;
            l++, r--;
        }
        
        return true;
    }
};