class Solution {
public:
    vector<int> twoSum(vector<int>& v, int target) {
        vector<pair<int , int>> temp;
        for(int i = 0; i < v.size(); i++) temp.push_back({v[i] , i});
        sort(temp.begin() , temp.end());
        int l = 0 , r = v.size() - 1;
        while(l <= r){
            if(temp[l].first + temp[r].first == target) return {temp[l].second , temp[r].second};
            else if(temp[l].first + temp[r].first < target) l++;
            else r--;
        }
        return {0 , 0};
    }
};