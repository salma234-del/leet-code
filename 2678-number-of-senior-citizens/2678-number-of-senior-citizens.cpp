class Solution {
public:
    int countSeniors(vector<string>& v) {
        vector<string> nums;
        for(int i = 0; i < v.size(); i++){
            string n = "";
            n += v[i][11]; n += v[i][12];
            nums.push_back(n);
        }
        
        int res = 0;
        
        for(auto& i : nums){
            int n = stoi(i);
            if(n > 60) res++;
        }
        
        return res;
    }
};