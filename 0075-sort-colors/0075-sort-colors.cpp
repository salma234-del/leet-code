class Solution {
public:
    void sortColors(vector<int>& v) {
        int freq[3] = {0};
        for(int i = 0; i < v.size(); i++) freq[v[i]]++;
        int idx = 0;
        for(int i = 0; i <= 2; i++){
            while(freq[i]--){
                v[idx++] = i;
            }
        }
    }
};