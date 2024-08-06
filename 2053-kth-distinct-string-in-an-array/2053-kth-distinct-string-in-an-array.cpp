class Solution {
public:
    string kthDistinct(vector<string>& v, int k) {
        map<string, int> freq;
        string res = "";
        for(int i = 0; i < v.size(); i++){
            freq[v[i]]++;
        }
        int c = 0;
        for(int i = 0; i < v.size(); i++){
            if(freq[v[i]] == 1){
                c++;
                if(c == k){
                    res = v[i];
                    break;
                }
            }
        }
        return res;
    }
};