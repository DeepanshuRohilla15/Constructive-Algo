class Solution {
  public:
    // Function to find the vertical width of a Binary Tree.
    void solve(Node* root,int hd,map<int,vector<int>>&mp){
      if(root==NULL) return ;
      
      mp[hd].push_back(root->data);
      
      solve(root->left,hd-1,mp);
      solve(root->right,hd+1,mp);
      
      
    }
    int verticalWidth(Node* root) {
        // code here
        map<int,vector<int>>mp;
        int hd = 0;
        solve(root,hd,mp);
        
        return mp.size();
    }
};