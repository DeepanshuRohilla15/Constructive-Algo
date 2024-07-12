class Solution {
  public:
    bool hasPathSum(Node *root, int target) {
        // Your code here
        if(!root) return false;
        if(!root->right && !root->left && target - root->data == 0) return true;
        if(!root->right && !root->left && target - root->data != 0) return false;
        
        return hasPathSum(root->right,target - root->data) || 
        hasPathSum(root->left,target - root->data);
    }
};