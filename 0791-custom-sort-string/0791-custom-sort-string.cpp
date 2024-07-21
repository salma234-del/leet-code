class Solution {
public:
    string customSortString(string order, string s) {
     
        map<char, int> freq;
        for(int i = 0; i < s.size(); i++){
            freq[s[i]]++;
        }
        
        string res = "";
        for(int i = 0; i < order.size(); i++){
            while(freq[order[i]] > 0){
                res += order[i];
                freq[order[i]]--;
            }
        }
        
        for(int i = 0; i < s.size(); i++){
            if(freq[s[i]] > 0) res += s[i], freq[s[i]]--;
        }
        
        return res;
    }
};