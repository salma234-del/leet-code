/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> largestValues(TreeNode* r) {
        
        if(r == NULL) return {};
        queue<TreeNode*> q;
        map<TreeNode*, int> d;
        q.push(r);
        d[r] = 0;
        
        vector<int> res(1e4 + 5);
        for(int i = 0; i < 1e4 + 5; i++) res[i] = INT_MIN;
        int lev = 0;
        
        while(!q.empty()){
            TreeNode* top = q.front(); q.pop();
            int currLev = d[top];
            res[currLev] = max(res[currLev], top -> val);
            lev = max(lev, d[top]);
            if(top -> left != NULL){
                q.push(top -> left);
                d[top -> left] = d[top] + 1;
            } 
            if(top -> right != NULL){
                q.push(top -> right);
                d[top -> right] = d[top] + 1;
            } 
        }
        
        res.erase(res.begin() + lev + 1, res.end());
        
        
        return res;
    }
};