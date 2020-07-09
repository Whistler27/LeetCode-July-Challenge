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

#define ll long long int

class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*,ll>> q;
 
        
        if(root==NULL) return 0;
        
        q.push(make_pair(root,0));
        ll ans=0;
        while(!q.empty()){
            int len=q.size();
            
            ll start=q.front().second;
            ll end=q.back().second;
            ans=max(ans,end-start+1);
            
            while(len>0){
                pair<TreeNode*,ll> cur=q.front();
                q.pop();
                ll idx=cur.second-start;
                TreeNode* p=cur.first;
               
                if(p->left) q.push(make_pair(p->left,2*idx+1));
                if(p->right) q.push(make_pair(p->right,2*idx+2));
                
                len--;
            }
            
            
        }
        return ans;
    }
};