class Solution {   
   static bool comp(pair<int, pair<int, int>>& a, pair<int, pair<int, int>>& b){    
        if(a.second.second == b.second.second) return a.second.first < b.second.first;
        return a.first < b.first;   
    }
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& v) {
        vector<pair<int,pair<int, int>>> a;
        
        for(int i = 0; i < v.size(); i++){
            int curr = v[i];
            string temp = "";
            while(curr > 0){
                int digit = curr % 10;
                curr /= 10;
                char chint = mapping[digit] + '0';
                temp = chint + temp;
            }
            int num;
            if(v[i] == 0) num = mapping[0];
            else num = stoi(temp);
            a.push_back({num, {i, v[i]}});
        }
        
        sort(a.begin(), a.end(), comp);
        
        vector<int> res;
        for(auto& i : a){
            res.push_back(i.second.second);
        }
        
        return res;
    }
};