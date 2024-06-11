class Solution {
public:
    vector<int> relativeSortArray(vector<int>& a, vector<int>& b) {
        map<int, int> freq;
        for(int i = 0; i < a.size(); i++){
            freq[a[i]]++;
        }
        vector<int> res, sorted;
        for(int i = 0; i < b.size(); i++){
            int times = freq[b[i]];
            while(times){
                res.push_back(b[i]);
                freq[b[i]]--;
                times--;
            }
        }
        for(int i = 0; i < a.size(); i++){
            if(freq[a[i]] > 0) sorted.push_back(a[i]);
        }
        
        sort(sorted.begin(), sorted.end());
        for(auto& i : sorted){
            res.push_back(i);
        }
        
        return res;
    }
};