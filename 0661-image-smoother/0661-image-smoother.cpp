class Solution {
public:
    vector<int> dx = {0,0,1,-1,1,1,-1,-1} , dy = {1,-1,0,0,1,-1,1,-1};
    bool valid(int i , int j, int n, int m){
        return i >= 0 && i < n && j >= 0 && j < m;
    }
    
    vector<vector<int>> imageSmoother(vector<vector<int>>& v) {
        vector<vector<int>> res(v.size(), vector<int>(v[0].size()));
        for(int i = 0; i < v.size(); i++){
            for(int j = 0; j < v[0].size(); j++){
                int sum = v[i][j] , c = 1;
                for(int k = 0; k < dx.size(); k++){
                    int nx = dx[k] + i, ny = dy[k] + j;
                    if(valid(nx , ny, v.size(), v[0].size())){
                        sum += v[nx][ny];
                        c++;
                    }
                }
                
                 res[i][j] = floor(sum / c);
            }
        }
        
        return res;
    }
};