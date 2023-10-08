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
    int goodNodes(TreeNode* root) {
        //Step 1 : Tree has no way to go from a node towards its parent so we have to maintain track of parent first
        unordered_map < TreeNode* , TreeNode* > mpp;
        queue < TreeNode* > q;
        q.push(root);
        while(!q.empty()){
            TreeNode* top = q.front();
            q.pop();
            if(top -> left != NULL){
                mpp[top -> left ] = top;
                q.push(top -> left);
            }
            if(top -> right != NULL){
                mpp[top -> right] = top;
                q.push(top -> right);
            }
        }
        int cnt = 0;
        // Step 2 :- traversing in the map and checking the required conditions 
        for(auto it : mpp){
            TreeNode* node = it.first;
            TreeNode* child = it.first;

            bool flag = 0;
            while(mpp.find(child) != mpp.end()){
                TreeNode* parent = mpp[child];
                if(node -> val < parent -> val){
                    flag = 1;
                }
                child = parent;
            }
            if(flag == 0){
                cnt++;
            }
        }
        return cnt + 1;
    }
};
