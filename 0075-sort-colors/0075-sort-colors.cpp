class Solution {
public:
    void sortColors(vector<int>& v) {
        for(int i = 0; i < v.size(); i++){
            for(int j = i + 1; j < v.size(); j++){
                if(v[j] < v[i]){
                     swap(v[i], v[j]);
                }
            }
        }
    }
};