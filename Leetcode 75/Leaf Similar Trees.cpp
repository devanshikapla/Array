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
    vector < int > modifiedInorderTraversal(TreeNode* root , vector < int > & ans){
        if(root == NULL) return ans;
        if(root -> left == NULL && root -> right == NULL){
            ans.push_back(root -> val);
        }
        modifiedInorderTraversal(root -> left, ans);
        modifiedInorderTraversal(root -> right , ans);
        return ans;
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector < int > leaf1 ;
        vector < int > leaf2;
        modifiedInorderTraversal(root1 , leaf1);
        modifiedInorderTraversal(root2 , leaf2);

        if(leaf1 == leaf2) return true;
        else{
            return false;
        }
    }
};
