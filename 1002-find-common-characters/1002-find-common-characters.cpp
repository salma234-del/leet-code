class Solution {
public:
    vector<string> commonChars(vector<string>& v) {
     int c = 0;
        vector<string> res;
       
     for(char i = 'a'; i <= 'z'; i++){
        
         int mn = INT_MAX;
         for(int j = 0; j < v.size(); j++){
             map<char, int> freq;
             for(int ch = 0; ch < v[j].size(); ch++){
                 if(v[j][ch] == i){
                     freq[i]++;
                 }
             }
             mn = min(mn, freq[i]);        
         }
         string temp = "";
         temp += i;
         if(mn != 0){
             while(mn--){
                 res.push_back(temp);
             }
         }
     }   
        
        return res;
    }
};