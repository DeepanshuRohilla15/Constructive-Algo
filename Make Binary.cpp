void convert(Node *h, TreeNode *&r) {
        queue<TreeNode*> q;
        TreeNode *t = NULL;
        
        r = new TreeNode(h->data);
        q.push(r);
        h = h->next;
        while(h and q.size()){
            t = q.front(), q.pop();
            t->left = new TreeNode(h->data);
            h = h->next;
            q.push(t->left);
            
            if(h){
                t->right = new TreeNode(h->data);
                q.push(t->right);
                h = h->next;
            }
        }
}
