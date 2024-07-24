class Solution {
public:
    vector<int> dx = {0, 0, 1, -1};
    vector<int> dy = {1, -1, 0, 0};
    
    bool valid(int i, int j, vector<vector<int>>& v){
        return i >= 0 && j >= 0 && i < v.size() && j < v[0].size() && v[i][j] == 1;
    }
    int orangesRotting(vector<vector<int>>& v) {
        queue<pair<int, int>> q;
        int vis[15][15];
        int o = 0;
        
        for(int i = 0; i < 15; i++){
            for(int j = 0; j < 15; j++){
                vis[i][j] = 0;
            }
        }
        for(int i = 0; i < v.size(); i++){
            for(int j = 0; j < v[i].size(); j++){
                if(v[i][j] == 2) q.push({i, j});
                else if(v[i][j] == 1) o++;
            }
        }
        if(o == 0) return 0;
        int res = 0;
        while(!q.empty()){           
            int sz = q.size();
            while(sz--){
                pair<int, int> top = q.front(); q.pop();
                cout << top.first << " " << top.second << "\n";
                for(int i = 0; i < 4; i++){
                int nx = top.first + dx[i];
                int ny = top.second + dy[i];
                if(valid(nx, ny, v) && vis[nx][ny] == 0){
                    o--;
                    q.push({nx, ny});
                    vis[nx][ny] = 2;
                }
            }
          }
           res++;
        }
        
      if(o > 0) return - 1;  
      return res - 1;

    }
};