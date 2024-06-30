class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        if(x == 1)
        {
            head = head->next;
            head->prev = NULL;
            return head;
        }
        int node = 1;
        Node* temp = NULL;
        while(node < x )
        {
            if(!temp)
            {
                temp = head;
            }
            else{
                temp = temp->next;
            }
            node++;
        }
        if(temp->next->next){
            temp->next = temp->next->next;
            Node* fwd = temp->next;
            fwd->prev = temp;
        }
        else{
            temp->next = NULL;
        }
        return head;
    }
};
