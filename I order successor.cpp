unordered_map<Node*, Node*>mpp;
    vector<Node*>v;
  
    void solve(Node* root){
        if(!root) return;
        solve(root->left);
        v.push_back(root);
        solve(root->right);
        
    }
    
    void solve2(Node* root){
        if(!root) return;
        solve2(root->left);
        root->next=mpp[root];
        solve2(root->right);
    }
    
    void populateNext(Node *root) {
        // code here
        solve(root);
        int n=v.size();
        for(int i=0; i<n-1; i++){
            mpp[v[i]]=v[i+1];
        }
        solve2(root);
    }