class Solution {
  public:
    Node* removeAllDuplicates(struct Node* head) {
        // code here
        if (head == nullptr || head->next == nullptr) {
        return head;
    }

    
    Node* dummy = new Node(0);
    dummy->data = 0; 
    dummy->next = head;

    Node* prev = dummy;
    Node* curr = head;

    while (curr != nullptr) {
        bool isDuplicate = false;

       
        while (curr->next != nullptr && curr->data == curr->next->data) {
            isDuplicate = true;
            curr = curr->next;
        }

        if (isDuplicate) {
           
            prev->next = curr->next;
        } else {
            
            prev = prev->next;
        }

       
        curr = curr->next;
    }

   
    Node* newHead = dummy->next;
    delete dummy;  
    return newHead;
    }
};
