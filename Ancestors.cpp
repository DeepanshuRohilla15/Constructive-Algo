class Solution {
  private:
  bool findanc(Node* root,int k,vector<int> &ds)
  {
      if(root==NULL) return false;
      if(root->data==k) return true;
      bool l=findanc(root->left,k,ds);
      if(l){
          ds.push_back(root->data);
          return true;
        }
      bool r=findanc(root->right,k,ds);
      if(r){
          ds.push_back(root->data);
          return true;
        }
      return false;
  }
  public:
    vector<int> Ancestors(struct Node *root, int target) {

        if(!root || root->data==target) return {};
        vector<int> ans;
        bool t=findanc(root,target,ans);
        return ans;
    }
};