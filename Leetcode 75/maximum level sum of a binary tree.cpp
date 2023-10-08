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
    int maxLevelSum(TreeNode* root) {
        if(root == NULL) return 1;
        int lev = 0;
        int res = 0;
        int sum = INT_MIN;
        queue < TreeNode * > q;
        q.push(root);
        while(!q.empty()){
            int val = 0;
            int size = q.size();
            for(int i = 0 ; i < size ; i++){
                auto top = q.front();
                q.pop();
                if(top -> left) q.push(top -> left);
                if(top -> right) q.push(top -> right);
                val = val + top -> val;
            }
            if(sum < val) {
                sum = val;
                res = lev;
            }
            lev++;
        }
        return res + 1;
    }
};
